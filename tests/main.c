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
	my_printf("%4.3d %d %s\n", 3, 2, "wew lad");
	my_printf_fd(2, "%4.3d %d %s\n", 3, 2, "wew lad");
	printf("%5.1d\n", 3);
	return (0);
}
