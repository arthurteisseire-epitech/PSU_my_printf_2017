/*
** EPITECH PROJECT, 2017
** File Name : p_puthexa_low.c
** File description:
** By Arthur Teisseire
*/

#include "my.h"

int p_puthexa_low(va_list ap)
{
	char *base = "0123456789abcdef";
	int nb = va_arg(ap, int);

	my_putnbr_base(nb, base);
	return (size_of_int(nb));
}
