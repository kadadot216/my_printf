#include "../my_redirect.h"
#include "my_types.h"
#include "my.h"

Test(base16, test4886, .init=redirect_all_std)
{
	my_putnbr_base_fd(1, 4886, BASE_16);
	cr_assert_stdout_eq_str("1316");
}

Test(base16, test10572, .init=redirect_all_std)
{
	my_putnbr_base_fd(1, 10572, BASE_16);
	cr_assert_stdout_eq_str("294c");
}

Test(base16, test6549, .init=redirect_all_std)
{
	my_putnbr_base_fd(1, 6549, BASE_16);
	cr_assert_stdout_eq_str("1995");
}

Test(base16, test8533, .init=redirect_all_std)
{
	my_putnbr_base_fd(1, 8533, BASE_16);
	cr_assert_stdout_eq_str("2155");
}
