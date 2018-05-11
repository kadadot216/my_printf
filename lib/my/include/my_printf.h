/*
** EPITECH PROJECT, 2018
** my_printf.h
** File description:
** Header file for my_printf library function
*/

#ifndef __MY_PRINTF_H__
#define __MY_PRINTF_H__

#include <unistd.h>

void	my_cswap(char *a, char *b);
void	my_revstr(char *str);
void	my_revstrn(char *str, int n);
int	my_strlen(const char *str);
int	my_putstr_fd(int fd, char const *str);
int	my_ftoa(float n, char buf[], int lpadding, int rpadding);
int	my_itoa(int nb, char *buf, int lpadding);
int	my_pow(int nb, int p);
int	my_putstrn_fd(int fd, char const *str, int n);
void	my_putchar_fd(int fd, char const c);

#endif
