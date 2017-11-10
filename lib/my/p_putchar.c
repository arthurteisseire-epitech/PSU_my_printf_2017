/*
** EPITECH PROJECT, 2017
** File Name : p_putchar.c
** File description:
** By Arthur Teisseire
*/

void my_putchar(char c);

int p_putchar(va_list ap)
{
	my_putchar(va_arg(ap, char));
	return (1);
}
