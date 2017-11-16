/*
** EPITECH PROJECT, 2017
** File Name : addZeros.c
** File description:
** By Arthur Teisseire
*/

#include "my.h"

int add_zeros(int nbr)
{
	int size_max = 3;
	int size = 0;
	int nb_zero;

	while (nbr != 0) {
		nbr /= 10;
		size++;
	}
	nb_zero = size_max - size;
	for (int i = 0; i < nb_zero; i++)
		my_putchar('0');
	return (nb_zero);
}
