/*
** EPITECH PROJECT, 2018
** my_getnbrtok.c
** File description:
** Transforms a part of char * until a tok
*/

int	my_getnbrtok(char const *buf, int *nb, char const tok)
{
	char const	*start = buf;

	while (*buf != '\0' && *buf != tok) {
		*nb *= 10;
		*nb = (*buf - '0');
		buf++;
	}
	return (buf - start);
}
