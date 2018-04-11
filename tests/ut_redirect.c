/*
** EPITECH PROJECT, 2018
** ut_redirect.c
** File description:
** Unit test files for my_printf
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

void	redirect_all_stdout(void)
{
	cr_redirect_stdout();
	cr_redirect_stderr();
}

Test(sum_stdarg, i_attempt_with_nb_0_and_args, .init=redirect_all_stdout)
{
	int	ret = sum_stdarg(0, 0, 1, 2, 3);

	cr_assert_stderr_eq_str("ERROR: No parameters to pass!\n", "");
	cr_assert_eq(ret, 0);
}

Test(disp_starg, dipslay_right_args, .init=redirect_all_stdout)
{
	disp_stdarg("csiis", 'X', "hi", 10, -3, "plop");
	cr_assert_stdout_eq_str("X\nhi\n10\n-3\nplop\n");
}
