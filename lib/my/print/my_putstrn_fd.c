/*
** EPITECH PROJECT, 2018
** my_putstrn_fd.c
** File description:
** Print first n chars of string
*/

#include "my.h"

int	my_putstrn_fd(int fd, char const *str, int n)
{
	write(fd, str, n);
	return (0);
}
