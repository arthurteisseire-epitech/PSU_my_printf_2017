/*
** EPITECH PROJECT, 2017
** File Name : my_stdarg.c
** File description:
** By Arthur Teisseire
*/

#include "my.h"

static const flags_t tab[] = {
	{'c', p_putchar},
	{'s', p_putstr},
	{'d', p_put_nbr},
	{'i', p_put_nbr}
};

int my_printf(char *str, ...)
{
	int i = 0;
	va_list ap;

	//va_start(ap, s);
	while (*str != '\0') {
		if (*str == '%') {}
			//exec(str, ap);
	}
	//va_end(ap);
	return (0);
}
