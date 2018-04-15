/*
** EPITECH PROJECT, 2018
** my_types.h
** File description:
** 	Custom types and consts header
*/

#ifndef MY_TYPES_H_
#define MY_TYPES_H_

#define BASE_8 "01234567"
#define BASE_10 "0123456789"
#define BASE_16 "0123456789abcdef"

#define FUNC_EXIT_SUCCESS (1)
#define FUNC_EXIT_FAILURE (0)

#define EPITECH_WIN (0)
#define EPITECH_DED (84)

typedef enum e_bool t_bool;

enum e_bool {
	FALSE = 0,
	TRUE = !FALSE
};

typedef unsigned int		t_uint;
typedef unsigned long		t_ul;
typedef unsigned long long	t_ull;
typedef const char		t_cchar;

#endif
