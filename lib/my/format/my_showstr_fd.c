/*
** EPITECH PROJECT, 2018
** my_showstr.c
** File description:
** 	Displays a string with authorized characters or its octal
** 	representation otherwise
*/

#include "my_printf.h"

int	my_showstr_fd(int fd, char const *str)
{
	int i = 0;

	while (str[i] != '\0') {
		if (is_printable(str[i]))
			my_putchar_fd(fd, str[i]);
		else {
			my_putstr_fd(fd, "\\0");
			my_putnbr_base_fd(fd, str[i], BASE_16);
		}
		i++;
	}
	return (MY_EXIT_SUCCESS);
}
