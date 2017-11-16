/*
** EPITECH PROJECT, 2017
** File Name : p_put_unsigned.c
** File description:
** By Arthur Teisseire
*/

#include "my.h"

int p_put_unsigned(va_list ap)
{
	unsigned int nb = va_arg(ap, unsigned int);

	return (my_put_unsigned(nb));
}
