/*
** EPITECH PROJECT, 2018
** my_itobase.c
** File description:
** Converts a number into a base
*/

#include "my_printf.h"

static int	my_itorevbase(int nb, char buf[], char *base)
{
	int	b_int = 0;
	int	len = 0;

	while (base[b_int])
		b_int++;
	if (b_int > 1) {
		if (nb >= b_int)
			len += my_itorevbase((nb / b_int), buf + 1,  base);
		*buf = (base[nb % b_int]);
	}
	len++;
	return (len);
}

int	my_itobase(int nb, char buf[], char *base)
{
	int	len = my_itorevbase(nb, buf, base);

	my_revstr(buf);
	return (len);
}
