/*
** EPITECH PROJECT, 2017
** File Name : my_putadress.c
** File description:
** By Arthur Teisseire
*/

#include "my.h"

int my_putadress(unsigned long int nbr)
{
	char const *base = "0123456789abcdef";
	unsigned long int nb_base = my_strlen(base);
	int size = 0;

	if (nbr >= nb_base) {
		size += my_putadress(nbr / nb_base);
		my_putchar(base[nbr % nb_base]);
		return (size + 1);
	} else {
		my_putchar(base[nbr % nb_base]);
		size++;
	}
	return (size);
}		
