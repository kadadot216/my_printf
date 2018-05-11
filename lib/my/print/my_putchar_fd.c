/*
** EPITECH PROJECT, 2018
** my_putchar_fd.c
** File description:
** Prints a char into fd
*/

#include "my_printf.h"

void	my_putchar_fd(int fd, char const c)
{
	write(fd, &c, 1);
}
