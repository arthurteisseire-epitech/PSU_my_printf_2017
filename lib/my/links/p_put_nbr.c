/*
** EPITECH PROJECT, 2017
** File Name : p_put_nbr.c
** File description:
** By Arthur Teisseire
*/

#include "my.h"

int p_put_nbr(va_list ap)
{
	int nb = va_arg(ap, int);

	return (my_put_nbr(nb));
}
