/*
** EPITECH PROJECT, 2018
** my_print_printable.c
** File description:
** Prints a string with octal code if char is non-printable
*/

#include "my.h"
#include "my_types.h"
#include "my_consts.h"

int	my_print_printable(int fd, char const *str)
{
	int	i = 0;
	int	npl = 0;
	char	*np_char = NULL;

	while (str[i] != '\0') {
		if (!my_char_isprintable(str[i])) {
			np_char = convert_base(str[i], BASE_10, BASE_8);
			npl = my_strlen(np_char);
			my_putstr_fd(fd, (npl == )"\\0");
			my_putstr_fd(fd, np_char);
			free(np_char);
		} else {
			my_putchar(str[i]);
		}
		i++;
	}
	return (0);
}
