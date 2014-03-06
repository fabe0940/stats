CC = gcc
WARNINGS = -ansi -pedantic -Wall -Wextra -D__USE_FIXED_PROTOTYPES__ -std=c89
CFLAGS = $(WARNINGS)
OBJ = main.o list.o utility.o
#LIBS = -lncurses
APPLICATION_NAME = stats

.PHONY : all rebuild clean

all : $(APPLICATION_NAME)

listTest : listTest.o list.o
	$(CC) $(CFLAGS) listTest.o list.o -o listTest $(LIBS)

rebuild :
	make clean
	make all

$(APPLICATION_NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(APPLICATION_NAME) $(LIBS)

main.o : main.c
	$(CC) $(CFLAGS) -c main.c $(LIBS)

list.o : list.c list.h utility.h
	$(CC) $(CFLAGS) -c list.c $(LIBS)

listTest.o : listTest.c list.h
	$(CC) $(CFLAGS) -c listTest.c $(LIBS)

utility.o : utility.c utility.h constants.h
	$(CC) $(CFLAGS) -c utility.c $(LIBS)

clean :
	rm -f $(APPLICATION_NAME) $(OBJ)
