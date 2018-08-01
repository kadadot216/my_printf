/*
** EPITECH PROJECT, 2018
** formatters_2.c
** File description:
** Second  part of formatters
*/

#include "my_printf.h"
#include <stdarg.h>

int	my_printf_string(va_list ap, char buf[])
{
	int	i = 0;
	char	*str = va_arg(ap, char *);

	i += my_strlen(str);
	my_strcpy(buf, str);
	return (i);
}

int	my_printf_char(va_list ap, char buf[])
{
	int	i = 0;
	char	c = ((char) va_arg(ap, int));

	buf[0] = c;
	i++;
	return (i);
}

int	my_printf_percent(va_list ap, char buf[])
{
	((void) ap);
	buf[0] = '%';
	return (1);
}
