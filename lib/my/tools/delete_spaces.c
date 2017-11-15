/*
** EPITECH PROJECT, 2017
** File Name : delete_spaces.c
** File description:
** By Arthur Teisseire
*/

void delete_spaces(char **str)
{
	while (**str == ' ')
		(*str)++;
}
