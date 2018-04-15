/*
** EPITECH PROJECT, 2018
** disp_stdtypes.c
** File description:
** Function wrapper for displaying a given type.
*/

#include "my_put_fd.h"
#include "stdargs.h"
#include "my_consts.h"

void	disp_str(va_list ap)
{
	my_putstr_fd(STDOUT, va_arg(ap, char *));
	my_putchar_fd(STDOUT, '\n');
}

void	disp_char(va_list ap)
{
	my_putchar_fd(STDOUT, (char) va_arg(ap, int));
	my_putchar_fd(STDOUT, '\n');
}

void	disp_int(va_list ap)
{
	my_putnbr_base_fd(STDOUT, va_arg(ap, int), BASE_10);
	my_putchar_fd(STDOUT, '\n');
}
