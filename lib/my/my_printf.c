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
	int	(*formatter)();
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

int	skip_precision(char const *head)
{
	int	paddelim = 0;
	char const	*start = head;

	while ((*head >= '0' && *head <= '9') || (*head == '.' && !paddelim)) {
		if (*head == '.') {
			paddelim++;
		}
		head++;
	}
	return (head - start);
}


int	(*get_flag(char const *b))()
{
	int	i = 0;
	int	f = 0;
	int	(*action)();

	i += skip_precision(b);
	while (f < 7) {
		if (b[i] == FORMAT_TAB[f].f) {
			action = FORMAT_TAB[f].formatter;
			return (action);
		}
		f++;
	}
	return (0);
}

int	my_printf(char const *format, ...)
{
	char	buffer[MAXBUFSIZE] = {0};
	int	i = 0;
	int	b = 0;
	va_list	ap;
	int	(*action)();

	va_start(ap, format);
	while (format[i] != '\0') {
		if (format[i] == '%' && (action = get_flag(&format[i+1]))) {
			b += action(ap, &buffer[b+i]) - 1;
			format += (skip_precision(format) + 1);
		}
		else
			buffer[b+i] = format[i];
		i++;
	}
	my_putstr_fd(1, buffer);
	my_memset(buffer, '\0', (b + i));
	return (b+i);
}
