SHELL = /bin/sh

SRC_TEST= add.c test_add.c
SRC_Production = add.c main.c
OBJS_TEST =  ${SRC_TEST:%.c=%.o}
OBJS_PRODUCTION =  ${SRC_Production:%.c=%.o}
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
	@echo ****************building object files****************
	${CC} ${CFLAGS} ${INCLUDES} -c $<

run_test:
	@echo ****************running unit tests****************
	./test_add

run_production_code:
	@echo ****************running production code****************
	./main

unit_testing:test_add run_test

production:main run_production_code

all:unit_testing production 
