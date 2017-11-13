/*
** EPITECH PROJECT, 2017
** File Name : p_putbin.c
** File description:
** By Arthur Teisseire
*/

#include "my.h"

int p_putbin(va_list ap)
{
	char *base = "01";
	int nb = va_arg(ap, int);

	my_putnbr_base(nb, base);
	return (size_of_int(nb));
}
