/*
** EPITECH PROJECT, 2017
** File Name : tests.c
** File description:
** By Arthur Teisseire
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <stdio.h>
#include "my.h"

void redirect_all_std(void)
{
	cr_redirect_stdout();
	cr_redirect_stderr();
}

Test(my_printf, string, .init = redirect_all_std)
{
	cr_assert(my_printf("toto et %s ont %d ans\n", "lala", -12) == 25);
	cr_assert_stdout_eq_str(my_printf("toto et %s ont %d ans\n", "lala", -12));
}

Test(my_printf, octal, .init = redirect_all_std)
{
	int nb = 10000;

	my_printf("%d en octal: %o\n", nb, nb);
	cr_assert_stdout_eq_str(printf("%d en octal: %o\n", nb, nb));
}

Test(my_printf, pointeur, .init = redirect_all_std)
{
	int nb = 10000;

	my_printf("Adresse de nb: %p\n", nb);
	cr_assert_stdout_eq_str(printf("Adresse de nb: %p\n", nb));
}
