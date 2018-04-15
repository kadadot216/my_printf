/*
** EPITECH PROJECT, 2018
** my_putstr_fd.c
** File description:
** Write a char* into fd
*/

#include "my.h"

void	my_putstr_fd(t_uint fd, t_cchar *str)
{
	write(fd, str, my_strlen(str));
}
