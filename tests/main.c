/*
** EPITECH PROJECT, 2018
** debug.c
** File description:
** Main file for GDB debugging
*/

#include <stdio.h>
#include "my.h"
#include "my_printf.h"

int	main(int ac, char **av)
{
	int	i = 0;

	my_printf("%d %d %%\n", 3, 2);
	printf("%5.1d\n", 3);
	return (0);
}
