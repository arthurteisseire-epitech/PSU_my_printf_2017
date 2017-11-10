/*
** EPITECH PROJECT, 2017
** File Name : my_stdarg.c
** File description:
** By Arthur Teisseire
*/

#include "my.h"

int my_printf(char *s, ...)
{
	int it = 0;
	va_list ap;

	va_start(ap, s);
	while (s[it] != '\0') {
		if (s[it] == 's')
			my_putstr(va_arg(ap, char *));
		else if (s[it] == 'c')
			my_putchar(va_arg(ap, int));
		else if (s[it] == 'i')
			my_put_nbr(va_arg(ap, int));
		else {
			my_puterror("Unknown Type, Exiting\n");
			return (84);
		}
		my_putchar('\n');
		it++;
	}
	va_end(ap);
	return (0);
}
