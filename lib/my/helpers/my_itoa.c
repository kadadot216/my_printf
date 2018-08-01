/*
** EPITECH PROJECT, 2018
** my_itoa.c
** File description:
** Converts an int to a string
*/

#include "my_printf.h"

int	my_itoa(int nb, char buf[], int lpad, int rpad)
{
	int	i = 0;

	if (nb == 0) {
		buf[i] = '0';
		i++;
	}
	while (nb > 0) {
		buf[i] = ((nb % 10) + '0');
		nb /= 10;
		i++;
	}
	while (i < rpad) {
		buf[i] = '0';
		i++;
	}
	while (i < lpad) {
		buf[i] = ' ';
		i++;
	}
	my_revstr(buf);
	buf[i] = '\0';
	return (i);
}
