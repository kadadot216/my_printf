/*
** EPITECH PROJECT, 2018
** my_printf.h
** File description:
** Header file for my_printf.c
*/

#ifndef __MY_PRINTF_H__
#define __MY_PRINTF_H__

enum e_printf_flag {
	DEC,
	UNS,
	FLOAT,
	EXP,
	CHAR,
	STR
};

#define F_DEC	'd'
#define F_UNS	'u'
#define F_FLOAT	'g'
#define F_EXP	'e'
#define F_CHAR	'c'
#define F_STR	's'

#endif
