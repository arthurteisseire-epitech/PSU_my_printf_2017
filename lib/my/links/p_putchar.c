/*
** EPITECH PROJECT, 2017
** File Name : p_putchar.c
** File description:
** By Arthur Teisseire
*/

#include "../my.h"

int p_putchar(va_list ap)
{
	char c = va_arg(ap, int);

	my_putchar(c);
	return (1);
}
