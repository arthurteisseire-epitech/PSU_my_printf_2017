/*
** EPITECH PROJECT, 2017
** File Name : my_putnbr_base.c
** File description:
** By Arthur Teisseire
*/

#include "my.h"

int my_putnbr_base(int nbr, char const *base)
{
	int nb_base = my_strlen(base);

	if (nbr < 0) {
		nbr = -nbr;
		my_putchar('-');
	}
	if (nbr >= nb_base) {
		my_putnbr_base(nbr / nb_base, base);
		my_putchar(base[nbr % nb_base]);
	} else
		my_putchar(base[nbr % nb_base]);
	return (nbr);
}
