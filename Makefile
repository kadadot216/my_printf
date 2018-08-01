##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile for my_printf
##

CC		=	gcc
DBCC		=	gcc -g
RM		=	rm -f

#	Library settings
LIB_DIR		=	lib
LIB_NAMEDIR	=	my
LIB_PATH	=	$(LIB_DIR)/$(LIB_NAMEDIR)

LIB_HDPATH	=	$(LIB_PATH)/include

LIB_HDSRC	=	my.h	\
			my_printf.h

LIB_HDS		=	$(addprefix $(LIB_HDPATH)/, $(LIB_HDSRC))

LIB_SRCS	=	helpers/my_revstr.c	\
			helpers/my_revstrn.c	\
			helpers/my_itoa.c	\
			helpers/my_ftoa.c	\
			helpers/my_itobase.c	\
			helpers/my_strlen.c	\
			helpers/my_strcpy.c	\
			helpers/my_pow.c	\
			helpers/my_putstr_fd.c	\
			helpers/my_str_toupcase.c	\
			helpers/my_memset.c	\
			formatters/formatters_1.c	\
			my_printf.c
			
			
LIB_SRC		=	$(addprefix $(LIB_PATH)/, $(LIB_SRCS))
LIB_OBJ		=	$(LIB_SRC:.c=.o)
LIB_NAME	=	lib$(LIB_NAMEDIR).a

#	Program settings
HDPATH		=	./include
CFLAGS		+=	-I$(HDPATH)
LDFLAGS		=	-L./$(LIB_DIR)
LIBFLAG		=	-l$(LIB_NAMEDIR)

#	Tests settings
TEST_NAME	=	unit_tests
TEST_SRC	=	tests/my_redirect.c				\
			tests/lib/ut_redirect.c				\
			tests/lib/ut_return.c				\
			tests/lib/my_putnbr_fd_base8_1.c		\
			tests/lib/my_putnbr_fd_base8_2.c		\
			tests/lib/my_putnbr_fd_base16_1.c		\
			tests/lib/my_putnbr_fd_base16_2.c
TEST_FLAGS	=	--coverage -lcriterion

GDB_MAIN	=	tests/main.c
GDB_NAME	=	gdb.out


.PHONY: tclean gclean fclean lclean lfclean

all:	lib

#	Library rules
lib:	libh liba

libh:
	@mkdir -p $(HDPATH)
	cp $(LIB_HDS) $(HDPATH)

liba:	$(LIB_OBJ)
	ar rc $(LIB_DIR)/$(LIB_NAME) $^

libclean:
	$(RM) $(LIB_OBJ)

libfclean: libclean
	rm -rf $(addprefix $(HDPATH)/, $(LIB_HDSRC))
	$(RM) $(LIB_DIR)/$(LIB_NAME)

#	Program rules
re: fclean all

clean:
	$(RM) $(OBJ)
	$(RM) $(LIBNAME)

fclean:	clean
	$(RM) $(HDTGR)
	$(RM) $(LIBTGR)

#	Tests rules
gdb:	gclean lib
	$(DBCC) $(CFLAGS) $(LDFLAGS) -o $(GDB_NAME) $(GDB_MAIN) $(LIB_SRC)

gclean:
	$(RM) $(GDB_NAME)

testlib:
	$(CC) $(CFLAGS) -o $(TEST_NAME) $(TEST_SRC) $(LDFLAGS) $(TEST_FLAGS) \
		$(LIBFLAG)
	./$(TEST_NAME)
	make tclean

tests_run: testlib

tclean:
	$(RM) *.gc*
	$(RM) $(TEST_NAME)

cclean: gclean tclean fclean libfclean
