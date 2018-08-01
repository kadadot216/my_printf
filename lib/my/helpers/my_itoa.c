/*
** EPITECH PROJECT, 2018
** my_itoa.c
** File description:
** Converts an int to a string
*/

#include "my_printf.h"

int	my_itoa_pad(int i, int pad, char c,  char buf[])
{
	while (i < pad) {
		buf[i] = c;
		i++;
	}
	return (i);
}

int	my_itoa(int nb, char buf[], int lpad, int rpad)
{
	int	i = 0;

	while (nb > 0) {
		buf[i] = ((nb % 10) + '0');
		nb /= 10;
		i++;
	}
	i = my_itoa_pad(i, rpad, '0', buf);
	i = my_itoa_pad(i, lpad, ' ', buf);
	my_revstr(buf);
	buf[i] = '\0';
	return (i);
}
