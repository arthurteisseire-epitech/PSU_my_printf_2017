/*
** EPITECH PROJECT, 2017
** File Name : my_putadress.c
** File description:
** By Arthur Teisseire
*/

#include "my.h"

unsigned long int my_putadress(unsigned long int nbr)
{
	char const *base = "0123456789abcdef";
	unsigned long int nb_base = my_strlen(base);

	if (nbr >= nb_base) {
		my_putadress(nbr / nb_base);
		my_putchar(base[nbr % nb_base]);
	} else
		my_putchar(base[nbr % nb_base]);
	return (nbr);
}		
