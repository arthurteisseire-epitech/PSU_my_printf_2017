/*
** EPITECH PROJECT, 2017
** File Name : my_put_unsigned.c
** File description:
** By Arthur Teisseire
*/

void my_putchar(char c);

int my_put_unsigned(unsigned int nb)
{
	int size = 0;

	if (nb > 9) {
		size += my_put_unsigned(nb / 10);
		my_putchar(nb % 10 + '0');
		return (size + 1);
	} else {
		my_putchar(nb + '0');
		size++;
	}
	return (size);
}
