/*
** EPITECH PROJECT, 2017
** File Name : handle_spaces.c
** File description:
** By Arthur Teisseire
*/

#include "my.h"

int handle_spaces(char **str)
{
	if (**str == ' ') {
		delete_spaces(str);
		if (**str == 'd' || **str == 'i') {
			my_putchar(' ');
			return (1);
		}
	}
	return (0);
}
