#include "my_printf.h"

static int	skip_precision(char const *head, int *lpad, int *rpad)
{
	int	paddelim = 0;
	char const	*start = head;
	int	*val = lpad;

	while ((*head >= '0' && *head <= '9') || (*head == '.' && !paddelim)) {
		if (*head == '.') {
			paddelim++;
			head++;
			val = rpad;
		}
		*val *= 10;
		*val = (*head - '0');
		head++;
	}
	return (head - start);
}

static format_tab_t	append_ft(char const c, int (*f)())
{
	format_tab_t	entry = {.f = c, .formatter = f};

	return (entry);
}

static format_tab_t	*fill_format_tab(format_tab_t *ft)
{
	ft[0] = append_ft('b', &my_printf_binary);
	ft[1] = append_ft('c', &my_printf_char);
	ft[2] = append_ft('f', &my_printf_float);
	ft[3] = append_ft('x', &my_printf_hexa);
	ft[4] = append_ft('X', &my_printf_hexaupcase);
	ft[5] = append_ft('d', &my_printf_int);
	ft[6] = append_ft('s', &my_printf_string);
	ft[7] = append_ft('u', &my_printf_uint);
	ft[8] = append_ft('%', &my_printf_percent);
	return (ft);
}

static int	(*get_flag(char const *b, int prec))()
{
	int	i = 0;
	int	f = 0;
	int	(*action)();
	format_tab_t	ft[PRINTF_FMTS];

	fill_format_tab(ft);
	i += prec;
	while (f < PRINTF_FMTS) {
		if (b[i] == ft[f].f) {
			action = ft[f].formatter;
			return (action);
		}
		f++;
	}
	return (0);
}

int	check_format(va_list ap, char *buffer, char const *format, int *prec)
{
	int	(*action)();
	int	bofs = 0;
	int	lpad = 0;
	int	rpad = 0;

	format++;
	*prec = skip_precision(format, &lpad, &rpad);
	action = get_flag(format, *prec);
	if (action) {
		bofs += action(ap, buffer, lpad, rpad) - 1;
	}
	return (bofs);
}
