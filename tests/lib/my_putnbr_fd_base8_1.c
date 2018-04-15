/*
** EPITECH PROJECT, 2018
** my_putnbr_fd_base8.c
** File description:
** Unit testing file for base8
*/

#include "../my_redirect.h"
#include "my_types.h"
#include "my.h"

Test(base8, t256, .init=redirect_all_std)
{
	my_putnbr_base_fd(1, 256, BASE_8);
	cr_assert_stdout_eq_str("400");
}

Test(base8, t405, .init=redirect_all_std)
{
	my_putnbr_base_fd(1, 405, BASE_8);
	cr_assert_stdout_eq_str("625");
}

Test(base8, t279, .init=redirect_all_std)
{
	my_putnbr_base_fd(1, 279, BASE_8);
	cr_assert_stdout_eq_str("427");
}

Test(base8, t560, .init=redirect_all_std)
{
	my_putnbr_base_fd(1, 560, BASE_8);
	cr_assert_stdout_eq_str("1060");
}

Test(base8, t228, .init=redirect_all_std)
{
	my_putnbr_base_fd(1, 228, BASE_8);
	cr_assert_stdout_eq_str("344");
}
