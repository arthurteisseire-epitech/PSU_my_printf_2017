/*
** EPITECH PROJECT, 2017
** File Name : p_putadress.c
** File description:
** By Arthur Teisseire
*/

#include "../my.h"

int p_putadress(va_list ap)
{
	void *ptr = va_arg(ap, void *);
	unsigned long int nb = (unsigned long int)ptr;

	my_putstr("0x");
	return (my_putadress(nb) + 2);
}
