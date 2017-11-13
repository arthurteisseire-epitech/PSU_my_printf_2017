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
	{'i', p_put_nbr},
	{'o', p_putoctal},
	{'x', p_puthexa_low},
	{'X', p_puthexa_up},
	{'b', p_putbin},
	{'p', p_putadress}
};

int my_printf(char *str, ...)
{
	int size = 0;
	va_list ap;

	va_start(ap, str);
	while (*str != '\0') {
		if (*str == '%') {
			str++;
			size += exec(str, ap);
			str++;
		}
		my_putchar(*str);
		str++;
		size++;
	}
	va_end(ap);
	return (size);
}

int exec(char *str, va_list ap)
{
	int i = 0;
	int size;

	while (tab[i].flag != *str)
		i++;
	size = tab[i].f(ap);
	return (size);
}
