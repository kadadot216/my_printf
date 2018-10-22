#include "my_printf.h"

int	my_printf_binary(va_list ap, char buf[])
{
	int	i = 0;
	unsigned int	nb = va_arg(ap, int);

	i += my_itobase(nb, &buf[i], "01");
	return (i);
}

int	my_printf_hexa(va_list ap, char buf[])
{
	int	i = 0;
	unsigned int	nb = va_arg(ap, int);

	buf[i] = '0';
	i++;
	buf[i] = 'x';
	i++;
	i += my_itobase(nb, &buf[i], "0123456789abcdef");
	return (i);
}

int	my_printf_hexaupcase(va_list ap, char buf[])
{
	int	i = 0;
	unsigned int	nb = va_arg(ap, int);

	buf[i] = '0';
	i++;
	buf[i] = 'x';
	i++;
	i += my_itobase(nb, &buf[i], "0123456789ABCDEF");
	return (i);
}

int	my_printf_int(va_list ap, char buf[], int lpad, int rpad)
{
	int	i = 0;
	int	nb = va_arg(ap, int);

	i += my_itoa(nb, &buf[i], lpad, rpad);
	return (i);
}

int	my_printf_uint(va_list ap, char buf[], int lpad, int rpad)
{
	int	i = 0;
	int	nb = va_arg(ap, unsigned int);

	i += my_itoa(nb, &buf[i], lpad, rpad);
	return (i);
}
