/*
** EPITECH PROJECT, 2017
** File Name : is_printable.c
** File description:
** By Arthur Teisseire
*/

int is_printable(char c)
{
	if (c != 127 && c >= 32)
		return (1);
	return (0);
}
