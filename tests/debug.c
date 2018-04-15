/*
** EPITECH PROJECT, 2018
** debug.c
** File description:
** Main file for GDB debugging
*/

#include "my.h"
#include "stdargs.h"
#include "my_types.h"

void	my_printf(t_cchar *format, ...);

int	main(void)
{
	my_printf("Hello");
	return (MY_EXIT_SUCCESS);
}
