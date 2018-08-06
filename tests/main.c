#include <stdio.h>
#include "my.h"
#include "my_printf.h"

int	main(int ac, char **av)
{
	int	i = 0;

	my_printf("%X %b %d\n", 3, 2, -4);
	return (0);
}
