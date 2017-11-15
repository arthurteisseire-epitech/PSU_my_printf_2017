/*
** EPITECH PROJECT, 2017
** File Name : p_putstr_oct.c
** File description:
** By Arthur Teisseire
*/

#include "../my.h"

int p_putstr_oct(va_list ap)
{
	char *str = va_arg(ap, char *);
	char *base = "01234567";
	int i = 0;
	int size = 0;
	int nb;

	while (str[i] != '\0') {
		nb = str[i];
		if (is_printable(str[i])) {
			my_putchar(str[i]);
			size++;
		} else {
			my_putchar('\\');
			size++;
			size += put_less_and_zero(&nb);
			size += my_putchar_base(nb, base);
		}
		i++;
	}
	return (size);
}
