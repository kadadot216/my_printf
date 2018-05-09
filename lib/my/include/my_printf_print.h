/*
** EPITECH PROJECT, 2018
** my_printf_print.h
** File description:
** Header file for differents printf helper functions
*/

#ifndef __MY_PRINTF_PRINT__
#define __MY_PRINTF_PRINT__

#include "my_printf_types.h"

void	my_putchar_fd(int fd, char const c);
void	my_putnbr_fd(int fd, int nb);
void	my_putnbr_base_fd(int fd, int nb, char const *base);
void	my_putstr_fd(int fd, char const *str);

#endif
