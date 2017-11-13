/*
** EPITECH PROJECT, 2017
** File Name : put_octal.c
** File description:
** By Arthur Teisseire
*/

#include "my.h"

int p_putoctal(va_list ap)
{
	char *base = "01234567";
	int nb = va_arg(ap, int);

	my_putnbr_base(nb, base);
	return (size_of_int(nb));
}
