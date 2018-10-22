#ifndef __MY_PRINTF_H__
#define __MY_PRINTF_H__

#define	MAXBUFSIZE	(4096)
#define	PRINTF_FMTS	(9)

#include <stdarg.h>
#include <unistd.h>

struct	format_tab_s {
	char f;
	int	(*formatter)();
};

typedef struct format_tab_s format_tab_t;

int	check_format(va_list ap, char *buffer, char const *format, int *prec);

#	ifndef	__STR_H__
#	define	__STR_H__
void	my_memset(char *str, char c, unsigned int size);
void	my_revstr(char *str);
void	my_str_toupcase(char *str);
char	*my_strcpy(char *dest, char const *src);
int	my_strlen(char const *str);
#	else
#		include "str.h"
#	endif
#	ifndef	__PRINTF_HELPERS__
#	define	__PRINTF_HELPERS__
int	my_ftoa(double n, char buf[], int lpad, int rpad);
int	my_itoa(int nb, char buf[], int lpad, int rpad);
int	my_itobase(int nb, char buf[], char *base);
int	my_putstr_fd(int fd, char const *str);
#	endif
#	ifndef	__PRINTF_FORMATTERS__
#	define	__PRINTF_FORMATTERS__
int	my_printf_binary(va_list ap, char buf[]);
int	my_printf_char(va_list ap, char buf[]);
int	my_printf_float(va_list ap, char buf[], int lpad, int rpad);
int	my_printf_hexa(va_list ap, char buf[]);
int	my_printf_hexaupcase(va_list ap, char buf[]);
int	my_printf_int(va_list ap, char buf[], int lpad, int rpad);
int	my_printf_string(va_list ap, char buf[]);
int	my_printf_uint(va_list ap, char buf[], int lpad, int rpad);
int	my_printf_percent(va_list ap, char buf[]);

int	my_printf(char const *format, ...);
int	my_printf_fd(int fd, char const *format, ...);
#	endif
#endif
