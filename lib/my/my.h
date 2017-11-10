#ifndef MY_H
#define MY_H

#include <stdarg.h>

typedef struct flags {
	char *flag;
	int (*f)(va_list);
} flags_t;

int my_puterror(char const *str);
int my_strlen(char const *str);
int my_printf(char *s, ...);

void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);

void p_putchar(va_list ap);
void p_put_nbr(va_list ap);
void p_putstr(va_list ap);

#endif
