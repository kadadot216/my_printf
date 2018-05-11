/*
** EPITECH PROJECT, 2018
** printchar.c
** File description:
** Print function for my_printf
*/

#include "my_printf.h"

void	printchar(int fd, va_list ap)
{
	my_putchar_fd(fd, (char) va_arg(ap, int));
}
