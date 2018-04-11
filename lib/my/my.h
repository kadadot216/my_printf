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

#define MY_EXIT_SUCCESS (0)
#define MY_EXIT_ERROR (84)

#define	ERR_PFX ("ERROR: ")

#define MY_EXIT_USAGE_MSG ("Usage:\tXd")
#define NO_PARAM_MSG ("No parameters to pass!\n")

void	my_putchar(char c);
void	my_puterror(char *prefix, char *strerr);
int	my_put_nbr(int nb);
void	my_putstr(char const *str);
int	my_strlen(char const *str);
int	disp_stdarg(char *s, ...);
int	sum_stdarg(int i, int nb, ...);

enum	tchoice {
	STR,
	CHAR,
	INT
};

void	disp_str(va_list ap);
void	disp_char(va_list ap);
void	disp_int(va_list ap);

#endif
