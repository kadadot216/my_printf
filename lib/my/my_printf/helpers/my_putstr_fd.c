#include "my_printf.h"
#include <unistd.h>

int	my_putstr_fd(int fd, char const *str)
{
	int	len = my_strlen(str);
	write(fd, str, len);
	return (len);
}
