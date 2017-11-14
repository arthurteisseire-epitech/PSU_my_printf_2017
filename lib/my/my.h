/*
** EPITECH PROJECT, 2017
** File Name : my.h
** File description:
** By Arthur Teisseire
*/

#ifndef MY_H
#define MY_H

#include <stdarg.h>
#include "tools.h"
#include "links.h"
#include "struct.h"

#define SIZE_OF_ADRESS 12

int my_printf(char *str, ...);
int exec(char *str, va_list ap);
flags_t *init();
void check_double_pourcent(char **str);

void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_putnbr_base(int nbr, char const *base);
unsigned long int my_putadress(unsigned long int nbr);

#endif
