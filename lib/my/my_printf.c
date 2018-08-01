/*
** EPITECH PROJECT, 2018
** my_printf.c
** File description:
** My_printf function
*/

#include "my_printf.h"
#include <stdarg.h>
#define	MAXBUFSIZE (4096)

struct	format_tab_s {
	char f;
	int	(*formatter)(va_list ap, char buf[]);
};

struct	format_tab_s	FORMAT_TAB[] = {
	{'b', &my_printf_binary},
	{'c', &my_printf_char},
	{'f', &my_printf_float},
	{'x', &my_printf_hexa},
	{'d', &my_printf_int},
	{'s', &my_printf_string},
	{'u', &my_printf_uint}
};

int	check_flag(char const *b, int (**action)())
{
	int	i = 0;
	int	f = 0;
	int	paddelim = 0;

	while ((b[i] >= '0' && b[i] <= '9') || (b[i] == '.' && !paddelim)) {
		if (b[i] == '.') {
			paddelim++;
		}
		i++;
	}
	while (f < 7) {
		if (b[i] == FORMAT_TAB[f].f) {
			*action = FORMAT_TAB[f].formatter;
			return (1);
		}
		f++;
	}
	return (0);
}

int	check_format(char *buffer, char const *orig, va_list ap)
{
	int	i = 0;
	int	(*action)();

	if (orig[i] == '%') {
		buffer[i] = '%';
		return (i);
	}
	if (check_flag(&orig[i], &action)) {
		i+= action(ap, &buffer[i]);
	}
	return (i);
}

int	my_printf(char const *format, ...)
{
	char	buffer[MAXBUFSIZE] = {0};
	int	i = 0;
	int	b = 0;
	va_list	ap;

	va_start(ap, format);
	while (format[i] != '\0') {
		if (format[i] == '%') {
			b += check_format(&buffer[b+i], &format[i+1], ap) - 1;
			format++;
		}
		else
			buffer[b+i] = format[i];
		i++;
	}
	my_putstr_fd(1, buffer);
	my_memset(buffer, '\0', (b + i));
	return (b+i);
}
