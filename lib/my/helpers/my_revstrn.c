/*
** EPITECH PROJECT, 2018
** my_revstr.c
** File description:
** Reverses partially a string to n
*/

#include "my_printf.h"

void	my_revstrn(char *str, int n)
{
	int	i = 0;
	int	j = (my_strlen(str) - 1);
	char	tmp = 0;

	while (i < (n / 2)) {
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}
	tmp = 0;
}
