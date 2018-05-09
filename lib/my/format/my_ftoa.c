/*
** EPITECH PROJECT, 2018
** my_ftoa.c
** File description:
** Converts a float to a string
*/

#include "my.h"

int	my_ftoa(float n, char buf[], int lpadding, int rpadding)
{
	int int_part = (int) n;
	int i_len = my_itoa(int_part, buf, lpadding);
	float fpart = n - (float) int_part;

	if (rpadding != 0) {
		buf[i_len] = '.';
		i_len++;
		fpart = fpart * my_pow(10, rpadding);
		i_len += my_itoa((int) fpart, (buf + i_len), rpadding);
	}
	return (i_len);
}
