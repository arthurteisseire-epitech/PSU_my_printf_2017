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
	unsigned int nb = va_arg(ap, unsigned int);

	return (my_putnbr_base(nb, base));
}
