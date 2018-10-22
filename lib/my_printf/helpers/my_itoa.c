#include "my_printf.h"

static int	my_itoa_pad(int i, int pad, char c, char buf[])
{
	while (i < pad) {
		buf[i] = c;
		i++;
	}
	return (i);
}

static int	my_itoa_isneg(int *nb)
{
	if (*nb < 0) {
		*nb = (- (*nb));
		return (1);
	}
	return (0);
}

static int	my_itoa_sign(int i, int n, char buf[])
{
	if (n) {
		buf[i] = '-';
		return (i + 1);
	}
	return (i);
}

int	my_itoa(int nb, char buf[], int lpad, int rpad)
{
	int	i = 0;
	int	n = 0;

	n = my_itoa_isneg(&nb);
	if (nb == 0) {
		buf[i] = '0';
		i++;
	}
	while (nb > 0) {
		buf[i] = ((nb % 10) + '0');
		nb /= 10;
		i++;
	}
	i = my_itoa_pad(i, rpad, '0', buf);
	i = my_itoa_pad(i, lpad, ' ', buf);
	i = my_itoa_sign(i, n, buf);
	my_revstr(buf);
	buf[i] = '\0';
	return (i);
}
