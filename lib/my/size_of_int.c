/*
** EPITECH PROJECT, 2017
** File Name : size_of_int.c
** File description:
** By Arthur Teisseire
*/

int size_of_int(int nb)
{
	int size = 0;

	while (nb != 0) {
		nb /= 10;
		size++;
	}
	return (size);
}
