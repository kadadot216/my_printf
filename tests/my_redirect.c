/*
** EPITECH PROJECT, 2018
** my_redirect.c
** File description:
** Test file for redirections
*/

#include "my_redirect.h"

void	redirect_all_std(void)
{
	cr_redirect_stdout();
	cr_redirect_stderr();
}
