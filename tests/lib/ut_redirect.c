#include "../my_redirect.h"
#include "my.h"

Test(sum_stdarg, i_attempt_with_nb_0_and_args, .init=redirect_all_std)
{
	int	ret = sum_stdarg(0, 0, 1, 2, 3);

	cr_assert_stderr_eq_str(ERR_NO_PARAM_MSG, "");
	cr_assert_eq(ret, 0);
}

Test(disp_starg, dipslay_right_args, .init=redirect_all_std)
{
	disp_stdarg("csiis", 'X', "hi", 10, -3, "plop");
	cr_assert_stdout_eq_str("X\nhi\n10\n-3\nplop\n");
}
