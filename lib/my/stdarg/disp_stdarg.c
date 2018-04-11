/*
** EPITECH PROJECT, 2018
** disp_stdarg.c
** File description:
** Displays the following args with a newline.
*/

#include "my.h"

int	disp_stdarg(char *s, ...)
{
	va_list ap;
	void	(*disp_ptr[])(va_list) = {
		&disp_str,
		&disp_char,
		&disp_int
	};

	va_start(ap, s);
	while (*s) {
		if (*s == 's')
			disp_ptr[STR](ap);
		else if (*s == 'c')
			disp_ptr[CHAR](ap);
		else 
			disp_ptr[INT](ap);
		s++;
	}
	va_end(ap);
	return (MY_EXIT_SUCCESS);
}
