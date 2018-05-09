/*
** EPITECH PROJECT, 2018
** debug.c
** File description:
** Main file for GDB debugging
*/

#include "my.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	char res[20] = {0};
	char	*pt = res;

	float	n = 68.069;
	int nb = my_ftoa(n, pt, 1, 3);
	my_putstrn_fd(1, pt, nb);
	pt += nb;
	my_itoa(nb, pt, 0);
	my_putchar_fd(1, '\n');
	my_putstr_fd(1, pt);
	my_putchar_fd(1, '\n');
	return 0;
}
