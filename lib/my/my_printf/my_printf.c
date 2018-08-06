/*
** EPITECH PROJECT, 2018
** my_printf.c
** File description:
** My_printf function
*/

#include "my_printf.h"
#include <stdarg.h>
#define	MAXBUFSIZE (4096)
#define	PRINTF_FMTS	(9)

static int	my_printf_exec(int fd, char const *format, va_list ap)
{
	char	buffer[MAXBUFSIZE] = {0};
	int	i = 0;
	int	b = 0;
	int	prec = 0;

	while (format[i] != '\0') {
		if (format[i] == '%') {
			b += check_format(ap, &buffer[b+i], &format[i], &prec);
			format += prec + 1;
		}
		else
			buffer[b+i] = format[i];
		i++;
	}
	my_putstr_fd(fd, buffer);
	my_memset(buffer, '\0', (b + i));
	return (b+i);
}

int	my_printf(char const *format, ...)
{
	va_list	ap;
	int	i = 0;

	va_start(ap, format);
	i = my_printf_exec(1, format, ap);
	return (i);
}

int	my_printf_fd(int fd, char const *format, ...)
{
	va_list	ap;
	int	i = 0;

	va_start(ap, format);
	i = my_printf_exec(fd, format, ap);
	return (i);
}
