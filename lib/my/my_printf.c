/*
** EPITECH PROJECT, 2017
** File Name : my_printf.c
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

	va_start(ap, str);
	while (*str != '\0') {
		if (*str == '%') {
			str++;
			exec(str, ap);
			str++;
		}
		my_putchar(*str);
		str++;
	}
	va_end(ap);
	return (0);
}

void exec(char *str, va_list ap)
{
	int i = 0;
	
	while (tab[i].flag != *str)
		i++;
	tab[i].f(ap);
}
