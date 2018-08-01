/*
** EPITECH PROJECT, 2018
** my_compute_power_rec.c
** File description:
** Computes the power of nb by p
*/

int	my_pow(int nb, int p)
{
	if (p < 0)
		return (0);
	if (p == 0)
		return (1);
	else
		return nb * my_pow(nb, p -1);
}
