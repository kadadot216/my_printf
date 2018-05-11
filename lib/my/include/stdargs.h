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

void	disp_str(va_list ap);
void	disp_char(va_list ap);
void	disp_int(va_list ap);
int	disp_stdarg(char *s, ...);
int	sum_stdarg(int i, int nb, ...);

#endif
