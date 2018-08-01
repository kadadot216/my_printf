/*
** EPITECH PROJECT, 2018
** stdargs.h
** File description:
** Header file for stdargs.c
*/

#ifndef __STDARGS_H__
#define __STDARGS_H__

#include <stdarg.h>

enum	e_choice {
	STR,
	CHAR,
	INT
};

#define MY_EXIT_USAGE_MSG ("Usage:\tXd")
#define ERR_NO_PARAM_MSG ("ERROR - No parameters to pass!\n")

void	disp_str(va_list ap);
void	disp_char(va_list ap);
void	disp_int(va_list ap);
int	disp_stdarg(char *s, ...);
int	sum_stdarg(int i, int nb, ...);

#endif
