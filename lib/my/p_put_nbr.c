/*
** EPITECH PROJECT, 2017
** File Name : p_put_nbr.c
** File description:
** By Arthur Teisseire
*/

int my_put_nbr(int nb);

int p_put_nbr(va_list ap)
{
	int nb = va_arg(ap, int);

	my_put_nbr(nb);
	//return (my_nblen(nb));
	return (0);
}
