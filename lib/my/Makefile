##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile for mylib
##

SRC	=	put/my_putchar.c	\
		put/my_puterror.c	\
		put/my_put_nbr.c	\
		put/my_putstr.c		\
		str/my_strlen.c		\
	        stdarg/sum_stdarg.c	\
		stdarg/disp_stdtypes.c	\
		stdarg/disp_stdarg.c

OBJ	=	$(SRC:.c=.o)

HDNAME	=	my.h

LIBNAME	=	libmy.a

HDDIR	=	../../include

LIBDIR	=	../..

CFLAGS	+=	-I.


all:	.a .h


.a:	$(OBJ)
	ar rc $(LIBNAME) $^
	cp $(LIBNAME) $(LIBDIR)

.h:
	@mkdir -p $(HDDIR)
	cp $(HDNAME) $(HDDIR)/$(HDNAME)

clean:
	rm -f $(OBJ)
	rm -f $(LIBNAME)

fclean:	clean
	rm -f $(HDDIR)/$(HDNAME)
	rm -f $(LIBDIR)/$(LIBNAME)

