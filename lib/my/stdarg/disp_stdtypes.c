/*
** EPITECH PROJECT, 2018
** disp_stdtypes.c
** File description:
** Function wrapper for displaying a given type.
*/

#include "my.h"

void	disp_str(va_list ap)
{
	my_putstr(va_arg(ap, char *));
	my_putchar('\n');
}

void	disp_char(va_list ap)
{
	my_putchar((char) va_arg(ap, int));
	my_putchar('\n');
}

void	disp_int(va_list ap)
{
	my_put_nbr(va_arg(ap, int));
	my_putchar('\n');
}
