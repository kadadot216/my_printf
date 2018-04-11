##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile for my_printf
##

CC	=	gcc -W -Wall -Wextra

GDBCC	=	gcc -g

CFLAGS	+=	-I./include

LDFLAGS	=	-L.

LDLIBS	=	-lmy

TFLAGS	=	--coverage -lcriterion

NAME	=	my_printf

GDBNAME	=	gdb.out

SRC	=	

OBJ	=	$(SRC:.c=.o)

MAIN	=

GMAIN	=	tests/main.c

T_NAME	=	unit_tests

T_SRC	=	tests/ut_redirect.c	\
		tests/ut_return.c


.PHONY: clean fclean tclean gclean lib libre re

all:	lib

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(LDFLAGS) -o $(NAME) $(MAIN) $(SRC) $(LDLIBS)

tests_run:
	$(CC) $(CFLAGS) $(LDFLAGS) -o $(T_NAME) $(T_SRC) $(SRC)	\
						$(LDLIBS) $(TFLAGS)
	./$(T_NAME)

gdb:
	$(GDBCC) $(CFLAGS) $(LDFLAGS) -o $(GDBNAME) $(GMAIN) $(SRC) $(LDLIBS)

retest: tclean tests_run

re: fclean libclean all

regdb: gclean gdb

lib:	
	make -C lib/my 

libclean:
	make -C lib/my fclean

libre: libclean lib

clean: tclean gclean
	rm -f $(OBJ)

fclean:	clean libclean
	rm -f $(NAME)

tclean:
	rm -f $(T_NAME)
	rm -f *.gc*

gclean:
	rm -f $(GDBNAME)
