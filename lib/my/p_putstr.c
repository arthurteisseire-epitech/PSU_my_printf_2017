/*
** EPITECH PROJECT, 2017
** File Name : p_putstr.c
** File description:
** By Arthur Teisseire
*/

int my_putstr(char const *str);

int p_putstr(va_list ap)
{
	char *str = va_arg(ap, char *);

	my_putstr(str);
	return (my_strlen(str));
}
