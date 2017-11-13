/*
** EPITECH PROJECT, 2017
** File Name : p_putptr.c
** File description:
** By Arthur Teisseire
*/

#include "my.h"

int p_putptr(va_list ap)
{
	const char *base = "0123456789abcdef";
	void *ptr = va_arg(ap, void *);
	unsigned long int nb = (unsigned long int)ptr;

	my_putstr("0x7fff");
	my_putnbr_base(nb, base);
	return (0);
}
