#include <criterion/criterion.h>
#include "my.h"

Test(sum_stdarg, return_correct_when_i_is_zero)
{
	int	ret = sum_stdarg(0, 3, 21, 25, -4);

	cr_assert_eq(ret, 42);
}

Test(sum_stdarg, i_attempt_2)
{
	int	ret = sum_stdarg(0, 3, 1, 2, 3);

	cr_assert_eq(ret, 6);
}

Test(sum_stdarg, return_right_length_of_str)
{
	int	strlen = sum_stdarg(1, 5, "Hello", "a", "toto", "", "plop");

	cr_assert_eq(strlen, 14);
}
