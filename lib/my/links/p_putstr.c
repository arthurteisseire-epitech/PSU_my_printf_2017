/*
** EPITECH PROJECT, 2017
** File Name : p_putstr.c
** File description:
** By Arthur Teisseire
*/

#include "my.h"

int p_putstr(va_list ap)
{
	char *str = va_arg(ap, char *);

	if (str == 0)
		return (my_putstr("(null)"));
	return (my_putstr(str));
}
