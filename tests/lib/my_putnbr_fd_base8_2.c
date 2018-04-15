/*
** EPITECH PROJECT, 2018
** my_putnbr_fd_base8.c
** File description:
** Unit testing file for base8
*/

#include "../my_redirect.h"
#include "my_types.h"
#include "my.h"

Test(base8, t239, .init=redirect_all_std)
{
	my_putnbr_base_fd(1, 239, BASE_8);
	cr_assert_stdout_eq_str("357");
}

Test(base8, t262, .init=redirect_all_std)
{
	my_putnbr_base_fd(1, 262, BASE_8);
	cr_assert_stdout_eq_str("406");
}
