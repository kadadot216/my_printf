/*
** EPITECH PROJECT, 2018
** my_printf_binary.c
** File description:
** Returns a string character corresponding to binary number
*/

#include <stdlib.h>
#include <stdarg.h>
#include "my_printf.h"

int	my_printf_binary(va_list ap, char buf[])
{
	int	i = 0;
	unsigned int	nb = va_arg(ap, int);

	i += my_itobase(nb, buf, "01");
	return (i);
}

int	my_printf_hexa(va_list ap, char buf[])
{
	int	i = 0;
	int	modifier = 0;
	unsigned int	nb = va_arg(ap, int);

	buf[i] = '0';
	i++;
	buf[i] = 'x';
	i++;
	i += my_itobase(nb, buf, "0123456789abcdef");
	if (modifier) {
		my_str_toupcase(&buf[0]);
	}
	return (i);
}

int	my_printf_int(va_list ap, char buf[])
{
	int	i = 0;
	int	lpad = 5;
	int	rpad = 1;
	int	nb = va_arg(ap, int);

	i += my_itoa(nb, buf, lpad, rpad);
	return (i);
}

int	my_printf_uint(va_list ap, char buf[])
{
	int	i = 0;
	int	lpad = 0;
	int	rpad = 0;
	int	nb = va_arg(ap, unsigned int);

	i += my_itoa(nb, buf, lpad, rpad);
	return (i);
}

int	my_printf_float(va_list ap, char buf[])
{
	int	i = 0;
	int	lpad = 0;
	int	rpad = 0;
	double	nb = va_arg(ap, double);

	i += my_ftoa(nb, buf, lpad, rpad);
	return (i);
}

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
