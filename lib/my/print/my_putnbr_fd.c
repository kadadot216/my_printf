/*
** EPITECH PROJECT, 2018
** my_putnbr_fd.c
** File description:
** Writes a number type into fd
*/

#include "my_printf.h"

void	my_putnbr_fd(int fd, int nb)
{
	if (nb < 0) {
		my_putchar_fd(fd, '-');
		nb = (- nb);
	}
	if (nb / 10)
		my_putnbr_fd(fd, (nb / 10));
	my_putchar_fd(fd, (nb % 10 + '0'));
}
