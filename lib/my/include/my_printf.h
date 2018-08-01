/*
** EPITECH PROJECT, 2018
** my_printf.h
** File description:
** Header file for my_printf library function
*/

#ifndef __MY_PRINTF_H__
#define __MY_PRINTF_H__

#include <stdarg.h>

// helpers
void	my_revstr(char *str);
void	my_revstrn(char *str, int n);
int	my_strlen(char const *str);
int	my_itobase(int nb, char buf[], char *base);
int	my_itoa(int nb, char buf[], int lpad, int rpad);
int	my_ftoa(double n, char buf[], int lpad, int rpad);
void	my_str_toupcase(char *str);
char	*my_strcpy(char *dest, char const *src);
void	my_memset(char *str, char c, unsigned int size);

// formatters
int	my_printf_binary(va_list ap, char buf[]);
int	my_printf_char(va_list ap, char buf[]);
int	my_printf_float(va_list ap, char buf[], int lpad, int rpad);
int	my_printf_hexa(va_list ap, char buf[]);
int	my_printf_int(va_list ap, char buf[], int lpad, int rpad);
int	my_printf_string(va_list ap, char buf[]);
int	my_printf_uint(va_list ap, char buf[], int lpad, int rpad);
int	my_printf_percent(va_list ap, char buf[]);


// print
int	my_putstr_fd(int fd, char const *str);

struct	format_tab_s {
	char f;
	int	(*formatter)();
};

typedef struct format_tab_s format_tab_t;

#endif
