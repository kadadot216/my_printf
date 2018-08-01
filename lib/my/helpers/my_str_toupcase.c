/*
** EPITECH PROJECT, 2018
** my_str_toupcase.c
** File description:
** Gets a string into uppercase
*/

void	my_str_toupcase(char *str)
{
	int	i = 0;

	while (str[i] != '\0') {
		if (str[i] >= 'a' && str[i] <= 'z') {
			str[i] -= 'a' - 'A';
		}
		i++;
	}
}
