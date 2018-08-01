/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** Header file for libmy.a
*/

#ifndef __MY_H__
#define __MY_H__

#include <unistd.h>
#include "my_types.h"
#include "my_consts.h"
#include "my_put_fd.h"

t_uint	my_strlen(t_cchar *str);
t_bool	is_printable(t_cchar c);

#endif
