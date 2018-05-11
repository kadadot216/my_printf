/*
** EPITECH PROJECT, 2018
** my_strlen.c
** File description:
** Returns the length of a char*
*/

#include "my_printf.h"

int	my_strlen(char const *str)
{
	int	length = 0;

	while (str[length])
		length++;
	return (length);
}
