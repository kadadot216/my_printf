/*
** EPITECH PROJECT, 2018
** my_put_fd.h
** File description:
** Header file for my_put_fd functions.c
*/

#ifndef __MY_PUT_FD__
#define __MY_PUT_FD__

#include "my_types.h"

void	my_putchar_fd(t_uint fd, t_cchar c);
void	my_putnbr_fd(t_uint fd, int nb);
void	my_putnbr_base_fd(t_uint fd, int nb, t_cchar *base);
void	my_putstr_fd(t_uint fd, t_cchar *str);

#endif
