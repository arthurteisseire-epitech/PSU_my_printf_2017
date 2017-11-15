/*
** EPITECH PROJECT, 2017
** File Name : my_printf.c
** File description:
** By Arthur Teisseire
*/

#include "my.h"

static const flags_t flag_array[NB_FLAGS] = {
	{'c', p_putchar},
	{'s', p_putstr},
	{'d', p_put_nbr},
	{'i', p_put_nbr},
	{'o', p_putoctal},
	{'x', p_puthexa_low},
	{'X', p_puthexa_up},
	{'b', p_putbin},
	{'p', p_putadress},
	{'S', p_putstr_oct}
};

int my_printf(char *str, ...)
{
	int size = 0;
	va_list ap;

	va_start(ap, str);
	while (*str != '\0') {
		size += check_double_pourcent(&str);
		if (*str == '%') {
			str++;
			size += exec(str, ap);
			str++;
		}
		if (*str != '\0') {
			my_putchar(*str);
			str++;
			size++;
		}
	}
	va_end(ap);
	return (size);
}

int exec(char *str, va_list ap)
{
	int size = 0;

	for (int it = 0; it < NB_FLAGS; it++)
		if (flag_array[it].flag == *str)
			size = flag_array[it].function(ap);
	return (size);
}

int check_double_pourcent(char **str)
{
	int size = 0;

	while (str[0][0] == '%' && str[0][1] == '%') {
		my_putchar('%');
		*str += 2;
		size++;
	}
	return (size);
}
