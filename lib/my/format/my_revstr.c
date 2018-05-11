/*
** EPITECH PROJECT, 2018
** my_revstr.c
** File description:
** Reverses a string
*/ 

#include "my_printf.h"

void	my_revstr(char *str)
{
	int	i = 0;
	int	j = (my_strlen(str) - 1);

	while (i < j) {
		my_cswap(&str[i], &str[j]);
		i++;
		j--;
	}
}
