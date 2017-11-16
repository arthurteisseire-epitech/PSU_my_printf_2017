/*
** EPITECH PROJECT, 2017
** File Name : p_putstr_oct.c
** File description:
** By Arthur Teisseire
*/

#include "my.h"

int put_char_oct(int nb)
{
	int size = 0;
	char const *base = "01234567";

	my_putchar('\\');
	size++;
	size += put_less_and_zero(&nb);
	size += my_putnbr_base(nb, base);
	return (size);
}

int p_putstr_oct(va_list ap)
{
	char *str = va_arg(ap, char *);
	int i = 0;
	int size = 0;
	int nb;

	if (str == 0)
		return (my_putstr("(null)"));
	while (str[i] != '\0') {
		nb = str[i];
		if (is_printable(str[i])) {
			my_putchar(str[i]);
			size++;
		} else
			size += put_char_oct(nb);
		i++;
	}
	return (size);
}
