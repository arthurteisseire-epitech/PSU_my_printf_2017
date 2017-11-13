/*
** EPITECH PROJECT, 2017
** File Name : p_putstr.c
** File description:
** By Arthur Teisseire
*/

#include "../my.h"

int p_putstr(va_list ap)
{
	return (my_putstr(va_arg(ap, char *)));
}
