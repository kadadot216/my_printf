/*
** EPITECH PROJECT, 2018
** my_printf.c
** File description:
** My_printf function
*/

#include "my_printf.h"
#include <stdarg.h>
#define	MAXBUFSIZE (4096)

int	fill_meme(char *buf)
{
	int	i = 0;

	while (i < 5) {
		buf[i] = 'r';
		i++;
	}
	return (i - 1);
}

int	my_printf(char const *format, ...)
{
	char	buffer[MAXBUFSIZE] = {0};
	int	i = 0;
	int	b = 0;

	while (format[i] != '\0') {
		if (format[i] == '%')
			b += fill_meme(&buffer[b+i]);
		else
			buffer[b+i] = format[i];
		i++;
	}
	my_putstr_fd(1, buffer);
	return (b+i);
}
