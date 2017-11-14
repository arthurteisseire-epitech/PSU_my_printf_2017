/*
** EPITECH PROJECT, 2017
** File Name : my_putchar_base.c
** File description:
** By Arthur Teisseire
*/

#include "my.h"

char my_putchar_base(char c, char const *base)
{
	int nb_base = my_strlen(base);

	if (c < 0) {
		c = -c;
		my_putchar('-');
	}
	if (c >= nb_base) {
		my_putchar_base(c / nb_base, base);
		my_putchar(base[c % nb_base]);
	} else
		my_putchar(base[c % nb_base]);
	return (c);
}
