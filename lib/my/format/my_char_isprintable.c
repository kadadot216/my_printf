/*
** EPITECH PROJECT, 2018
** my_char_isprintable.c
** File description:
** Check wheter a char is printable
*/

int	my_char_isprintable(const char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
