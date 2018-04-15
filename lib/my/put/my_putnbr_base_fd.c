/*
** EPITECH PROJECT, 2018
** my_putnbr_base_fd.c
** File description:
** Write a number type converted to a base into fd
*/

#include "my.h"

void	my_putnbr_base_fd(t_uint fd, int nb, t_cchar *base)
{
	t_uint	b_int = 0;

	while (base[b_int])
		b_int++;
	if (b_int > 1) {
		if (nb < 0) {
			my_putchar_fd(fd, '-');
			nb = (- nb);
		}
		if (nb >= b_int)
			my_putnbr_base_fd(fd, (nb / b_int), base);
		my_putchar_fd(fd, base[nb % b_int]);
	}
}
