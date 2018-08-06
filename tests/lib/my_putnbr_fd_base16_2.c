#include "../my_redirect.h"
#include "my_types.h"
#include "my.h"

Test(base16, test6870, .init=redirect_all_std)
{
	my_putnbr_base_fd(1, 6870, BASE_16);
	cr_assert_stdout_eq_str("1ad6");
}

Test(base16, test397157, .init=redirect_all_std)
{
	my_putnbr_base_fd(1, 397157, BASE_16);
	cr_assert_stdout_eq_str("60f65");
}

Test(base16, test211909, .init=redirect_all_std)
{
	my_putnbr_base_fd(1, 211909, BASE_16);
	cr_assert_stdout_eq_str("33bc5");
}

Test(base16, test453712, .init=redirect_all_std)
{
	my_putnbr_base_fd(1, 453712, BASE_16);
	cr_assert_stdout_eq_str("6ec50");
}

Test(base16, test344847, .init=redirect_all_std)
{
	my_putnbr_base_fd(1, 344847, BASE_16);
	cr_assert_stdout_eq_str("5430f");
}
