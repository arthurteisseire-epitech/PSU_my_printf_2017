/*
** EPITECH PROJECT, 2017
** File Name : p_puthexa_up.c
** File description:
** By Arthur Teisseire
*/

#include "my.h"

int p_puthexa_up(va_list ap)
{
	char *base = "0123456789ABCDEF";
	unsigned int nb = va_arg(ap, unsigned int);

	return (my_putnbr_base(nb, base));
}
