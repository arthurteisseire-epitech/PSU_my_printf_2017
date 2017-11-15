/*
** EPITECH PROJECT, 2017
** File Name : check_double_pourcent.c
** File description:
** By Arthur Teisseire
*/

void my_putchar(char c);

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
