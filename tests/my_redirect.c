#include "my_redirect.h"

void	redirect_all_std(void)
{
	cr_redirect_stdout();
	cr_redirect_stderr();
}
