/*
** EPITECH PROJECT, 2018
** my_printf.c
** File description:
** My_printf function
*/

#include "my_printf.h"
#include <stdarg.h>
#define	MAXBUFSIZE (4096)

format_tab_t	FORMAT_TAB[] = {
	{'b', &my_printf_binary},
	{'c', &my_printf_char},
	{'f', &my_printf_float},
	{'x', &my_printf_hexa},
	{'d', &my_printf_int},
	{'s', &my_printf_string},
	{'u', &my_printf_uint},
	{'%', &my_printf_percent}
};

int	skip_precision(char const *head, int *lpad, int *rpad)
{
	int	paddelim = 0;
	char const	*start = head;
	int	*val = lpad;

	while ((*head >= '0' && *head <= '9') || (*head == '.' && !paddelim)) {
		if (*head == '.') {
			paddelim++;
			head++;
			val = rpad;
		}
		*val *= 10;
		*val = (*head - '0');
		head++;
	}
	return (head - start);
}

int	(*get_flag(char const *b, int prec))()
{
	int	i = 0;
	int	f = 0;
	int	(*action)();

	i += prec;
	while (f < 8) {
		if (b[i] == FORMAT_TAB[f].f) {
			action = FORMAT_TAB[f].formatter;
			return (action);
		}
		f++;
	}
	return (0);
}

int	check_format(va_list ap, char *buffer, char const *format, int *prec)
{
	int	(*action)();
	int	bofs = 0;
	int	lpad = 0;
	int	rpad = 0;

	format++;
	*prec = skip_precision(format, &lpad, &rpad);
	action = get_flag(format, *prec);
	if (action) {
		bofs += action(ap, buffer, lpad, rpad) - 1;
	}
	return (bofs);
}

int	my_printf(char const *format, ...)
{
	char	buffer[MAXBUFSIZE] = {0};
	int	i = 0;
	int	b = 0;
	int	prec = 0;
	va_list	ap;

	va_start(ap, format);
	while (format[i] != '\0') {
		if (format[i] == '%') {
			b += check_format(ap, &buffer[b+i], &format[i], &prec);
			format += prec + 1;
		}
		else
			buffer[b+i] = format[i];
		i++;
	}
	my_putstr_fd(1, buffer);
	my_memset(buffer, '\0', (b + i));
	return (b+i);
}
