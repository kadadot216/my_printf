/*
** EPITECH PROJECT, 2018
** my_revstr.c
** File description:
** Reverses partially a string to n
*/ 

#include "my.h"

void	my_revstrn(char *str, int n)
{
	int	i = 0;
	int	j = (my_strlen(str) - 1);

	while (i < (n / 2)) {
		my_cswap(&str[i], &str[j]);
		i++;
		j--;
	}
}
