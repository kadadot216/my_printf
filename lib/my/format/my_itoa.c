/*
** EPITECH PROJECT, 2018
** my_itoa.c
** File description:
** Converts an int to a string
*/

#include "my.h"

int	my_itoa(int nb, char buf[], int lpadding)
{
	int	i = 0;

	while (nb > 0) {
		buf[i] = ((nb % 10) + '0');
		nb /= 10;
		i++;
	}
	while (i < lpadding) {
		buf[i] = '0';
		i++;
	}
	my_revstr(buf);
	buf[i] = '\0';
	return (i);
}
