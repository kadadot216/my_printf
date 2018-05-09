/*
** EPITECH PROJECT, 2018
** my_cswap.c
** File description:
** Swaps the content of two chars, whose addresses are given as a parameter.
*/

void	my_cswap(char *a, char *b)
{
	char	tmp = *a;

	*a = *b;
	*b = tmp;
}
