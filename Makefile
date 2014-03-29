CC = gcc
WARNINGS = -ansi -pedantic -Wall -Wextra -D__USE_FIXED_PROTOTYPES__ -std=c99
CFLAGS = $(WARNINGS)
OBJ = main.o calc.o list.o utility.o
LIBS = -lm
APPLICATION_NAME = stats

.PHONY : all rebuild clean cleanMain cleanListTest

all : $(APPLICATION_NAME)

listTest : listTest.o list.o
	$(CC) $(CFLAGS) listTest.o list.o -o listTest $(LIBS)

rebuild :
	make clean
	make all

clean : cleanMain cleanListTest

$(APPLICATION_NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(APPLICATION_NAME) $(LIBS)

main.o : main.c
	$(CC) $(CFLAGS) -c main.c $(LIBS)

calc.o : calc.c calc.h list.h
	$(CC) $(CFLAGS) -c calc.c $(LIBS)

list.o : list.c list.h utility.h
	$(CC) $(CFLAGS) -c list.c $(LIBS)

listTest.o : listTest.c list.h
	$(CC) $(CFLAGS) -c listTest.c $(LIBS)

utility.o : utility.c utility.h
	$(CC) $(CFLAGS) -c utility.c $(LIBS)

cleanMain : 
	rm -f $(OBJ) $(APPLICATION_NAME)

cleanListTest : 
	rm -f listTest.o list.o listTest
