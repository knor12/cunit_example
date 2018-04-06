SHELL = /bin/sh

OBJS_TEST =  add.c test_add.c
OBJS_PRODUCTION =  add.c main.c
CFLAG = -Wall -g
CC = gcc
INCLUDE =.
LIBS = -lcunit

test_add:${OBJS_TEST}
	@echo ****************building unit test executable****************
	${CC} ${CFLAGS} ${INCLUDES} -o $@ ${OBJS_TEST} ${LIBS}


main:${OBJS_PRODUCTION}
	@echo ****************building production executable****************
	${CC} ${CFLAGS} ${INCLUDES} -o $@ ${OBJS_PRODUCTION} 

clean:
	@echo ****************removing object files and executables****************
	-rm -f *.o core *.core test_add main

.cpp.o:
	${CC} ${CFLAGS} ${INCLUDES} -c $<

run_test:
	@echo ****************running unit tests****************
	./test_add

run_production_code:
	@echo ****************running production code****************
	./main

unit_testing:clean test_add run_test

production:clean main run_production_code

all:unit_testing production 
