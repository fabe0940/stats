CC = gcc
WARNINGS = -ansi -pedantic -Wall -Wextra -D__USE_FIXED_PROTOTYPES__ -std=c89
CFLAGS = $(WARNINGS)
OBJ = main.o
#LIBS = -lncurses
APPLICATION_NAME = stats

.PHONY : all rebuild clean

all : $(APPLICATION_NAME)

rebuild :
	make clean
	make all

$(APPLICATION_NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(APPLICATION_NAME) $(LIBS)

main.o : main.c
	$(CC) $(CFLAGS) -c main.c $(LIBS)

clean :
	rm -f $(APPLICATION_NAME) $(OBJ)
