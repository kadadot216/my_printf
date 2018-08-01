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
	char	tmp = 0;

	while (i < j) {
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}
	tmp = 0;
}
