/*
** EPITECH PROJECT, 2018
** my_strlen.c
** File description:
** Returns the length of a char*
*/

#include "my.h"

t_uint	my_strlen(t_cchar *str)
{
	t_uint	length = 0;

	while (str[length])
		length++;
	return (length);
}
