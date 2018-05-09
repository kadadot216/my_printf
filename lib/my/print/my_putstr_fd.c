/*
** EPITECH PROJECT, 2018
** my_putstr_fd.c
** File description:
** Write a char* into fd
*/

#include "my.h"

int	my_putstr_fd(int fd, char const *str)
{
	write(fd, str, my_strlen(str));
	return (0);
}
