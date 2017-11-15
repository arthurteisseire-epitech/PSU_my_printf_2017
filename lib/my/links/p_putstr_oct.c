/*
** EPITECH PROJECT, 2017
** File Name : p_putstr_oct.c
** File description:
** By Arthur Teisseire
*/

#include "../my.h"

int is_printable(char c)
{
	if (c != 127 && c >= 32)
		return (1);
	return (0);
}

int p_putstr_oct(va_list ap)
{
	char *str = va_arg(ap, char *);
	char *base = "01234567";
	int i = 0;
	int size = 0;

	while (str[i] != '\0') {
		if (is_printable(str[i])) {
			my_putchar(str[i]);
			size++;
		} else {
			my_putchar('\\');
			size++;
			size += my_putnbr_base(str[i], base);
		}
		i++;
	}
	return (size);
}
