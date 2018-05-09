/*
** EPITECH PROJECT, 2018
** my_printf.c
** File description:
** My_printf function
*/

#include "my.h"
#include "my_printf.h"

void	my_printf(char const *format, ...)
{
	my_putstr_fd(STDOUT, format);
}
