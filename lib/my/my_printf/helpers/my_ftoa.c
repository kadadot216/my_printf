/*
** EPITECH PROJECT, 2018
** my_ftoa.c
** File description:
** Converts a float to a string
*/

#include "my_printf.h"

static int	pow_10(int n)
{
	int	i = 1;

	while (n > 0) {
		i *= 10;
		n--;
	}
	return (i);
}

int	my_ftoa(double n, char buf[], int lpad, int rpad)
{
	int int_part = (int) n;
	int i_len = my_itoa(int_part, buf, lpad, 0);
	double fpart = n - (double) int_part;

	if (rpad!= 0) {
		buf[i_len] = '.';
		i_len++;
		fpart = fpart * pow_10(rpad);
		i_len += my_itoa((int) fpart, (buf + i_len), rpad, 0);
	}
	return (i_len);
}
