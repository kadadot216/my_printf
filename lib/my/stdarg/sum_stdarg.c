/*
** EPITECH PROJECT, 2018
** sum_stdarg.c
** File description:
** Sum the following integers or the lenth of following strings.
*/

#include "my.h"

int	sum_stdarg(int i, int nb, ...)
{
	va_list	ap;
	int	sum = 0;

	va_start(ap, nb);
	if (nb == 0) {
		my_putstr_fd(STDERR, ERR_NO_PARAM_MSG);
		return (sum);
	}
	while (nb > 0) {
		if (i)
			sum += my_strlen(va_arg(ap, char *));
		else if (!i)
			sum += va_arg(ap, int);
		nb--;
	}
	va_end(ap);
	return (sum);
}
