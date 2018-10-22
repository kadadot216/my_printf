#include "my_printf.h"

int	my_printf_float(va_list ap, char buf[], int lpad, int rpad)
{
	int	i = 0;
	double	nb = va_arg(ap, double);

	i += my_ftoa(nb, &buf[i], lpad, rpad);
	return (i);
}

int	my_printf_string(va_list ap, char buf[])
{
	int	i = 0;
	char	*str = va_arg(ap, char *);

	my_strcpy(&buf[i], str);
	i += my_strlen(str);
	return (i);
}

int	my_printf_char(va_list ap, char buf[])
{
	int	i = 0;
	char	c = ((char) va_arg(ap, int));

	buf[0] = c;
	i++;
	return (i);
}

int	my_printf_percent(va_list ap, char buf[])
{
	((void) ap);
	buf[0] = '%';
	return (1);
}
