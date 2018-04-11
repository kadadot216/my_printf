/*
** EPITECH PROJECT, 2018
** my_swap.c
** File description:
** Swaps the content of two integers, whose addresses are given as a parameter.
*/

void	my_swap(int *a, int *b)
{
	int	t = *a;

	*a = *b;
	*b = t;
}
