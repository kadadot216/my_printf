/*
** EPITECH PROJECT, 2018
** my_putchar_fd.c
** File description:
** Prints a char into fd
*/

#include "my.h"

void	my_putchar_fd(t_uint fd, t_cchar c)
{
	write(fd, &c, 1);
}
