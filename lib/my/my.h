/*
** EPITECH PROJECT, 2017
** File Name : my.h
** File description:
** By Arthur Teisseire
*/

#ifndef MY_H
#define MY_H

#define SIZE_OF_ADRESS 12

#include <stdarg.h>

typedef struct flags {
	char flag;
	int (*f)(va_list);
} flags_t;

int my_printf(char *str, ...);

int my_puterror(char const *str);
int my_strlen(char const *str);
int size_of_int(int nb);

void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_putnbr_base(int nbr, char const *base);
unsigned long int my_putadress(unsigned long int nbr);

int p_putchar(va_list ap);
int p_put_nbr(va_list ap);
int p_putstr(va_list ap);
int p_putoctal(va_list ap);
int p_puthexa_low(va_list ap);
int p_puthexa_up(va_list ap);
int p_putbin(va_list ap);
int p_putadress(va_list ap);

int exec(char *str, va_list ap);
flags_t *init();

#endif
