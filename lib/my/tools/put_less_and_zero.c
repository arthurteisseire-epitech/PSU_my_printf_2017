/*
** EPITECH PROJECT, 2017
** File Name : put_less_and_zero.c
** File description:
** By Arthur Teisseire
*/

#include "../my.h"

int put_less_and_zero(int *nb)
{
	int size = 0;

	if (*nb < 0) {
		*nb = -(*nb);
		my_putchar('-');
		size++;
	}
	size += addZeros(*nb);
	return (size);
}
