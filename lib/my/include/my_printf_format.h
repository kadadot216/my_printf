/*
** EPITECH PROJECT, 2018
** my_printf_format.h
** File description:
** Header file for my_printf.c
*/

#ifndef __MY_PRINTF_FORMAT_H__
#define __MY_PRINTF_FORMAT_H__

#include "my_types.h"

enum e_printf_flag {
	DEC,
	UNS,
	FLOAT,
	EXP,
	CHAR,
	STR
};

void	my_show_str_fd(int fd, char const *str);

#endif
