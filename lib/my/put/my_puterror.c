/*
** EPITECH PROJECT, 2018
** my_puterror.c
** File description:
** Dispaly a message as char * in stderr
*/

#include "my.h"

void	my_puterror(char *prefix, char *strerr)
{
	int	i = 0;
	int	j = 0;

	while (prefix[j] != '\0')
		j++;
	while (strerr[i] != '\0')
		i++;
	write(2, prefix, j);
	write(2, strerr, i);
}
