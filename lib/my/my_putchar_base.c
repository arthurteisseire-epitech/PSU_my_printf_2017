/*
** EPITECH PROJECT, 2017
** File Name : my_putchar_base.c
** File description:
** By Arthur Teisseire
*/

#include "my.h"

int my_putchar_base(int nbr, char const *base)
{
	int nb_base = my_strlen(base);
	int size = 0;

	if (nbr >= nb_base) {
		size += my_putchar_base(nbr / nb_base, base);
		my_putchar(base[nbr % nb_base]);
		return (size + 1);
	} else {
		my_putchar(base[nbr % nb_base]);
		size++;
	}
	return (size);
}
