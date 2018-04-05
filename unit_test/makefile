SHELL = /bin/sh

OBJS =  add.c test_add.c
CFLAG = -Wall -g
CC = gcc
INCLUDE =.
LIBS = -lcunit

test_add:${OBJ}
	${CC} ${CFLAGS} ${INCLUDES} -o $@ ${OBJS} ${LIBS}

clean:
	-rm -f *.o core *.core test_add

.cpp.o:
	${CC} ${CFLAGS} ${INCLUDES} -c $<

run:
	./test_add

all: clean test_add run
