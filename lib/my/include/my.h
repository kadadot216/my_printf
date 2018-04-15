/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** Header file for libmy.a
*/

#ifndef __MY_H__
#define __MY_H__

#include <unistd.h>
#include <stdarg.h>
#include "my_types.h"

#define	STDOUT	(1)
#define	STDERR	(2)

#define	BASE_2	"01"
#define	BASE_8	"01234567"
#define	BASE_10	"0123456789"
#define	BASE_16	"0123456789abcdef"

#define MY_EXIT_SUCCESS (0)
#define MY_EXIT_ERROR (84)

#define MY_EXIT_USAGE_MSG ("Usage:\tXd")
#define ERR_NO_PARAM_MSG ("ERROR - No parameters to pass!\n")

enum	e_choice {
	STR,
	CHAR,
	INT
};

void	my_putchar_fd(t_uint fd, t_cchar c);
void	my_putnbr_fd(t_uint fd, int nb);
void	my_putnbr_base_fd(t_uint fd, int nb, t_cchar *base);
void	my_putstr_fd(t_uint fd, t_cchar *str);
t_uint	my_strlen(t_cchar *str);
t_bool	is_printable(t_cchar c);
void	disp_str(va_list ap);
void	disp_char(va_list ap);
void	disp_int(va_list ap);
int	disp_stdarg(char *s, ...);
int	sum_stdarg(int i, int nb, ...);

#endif
