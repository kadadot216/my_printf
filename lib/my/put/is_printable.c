/*
** EPITECH PROJECT, 2018
** is_printable.c
** File description:
** 	Checks if a character is printable
*/

#include "my_types.h"

t_bool	is_printable(t_cchar c)
{
	if ((c > 31 && c < 127 )|| c == '\0')
		return (TRUE);
	else
		return (FALSE);
}
