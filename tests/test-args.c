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
	cr_assert(my_printf("toto et %s ont %d ans\n", "lala", 12) == 24);
	cr_assert_stdout_eq_str("toto et lala ont 12 ans\n");
}

Test(my_printf, char, .init = redirect_all_std)
{
	cr_assert(my_printf("Lettre: %c\n", 'a') == 10);
	cr_assert_stdout_eq_str("Lettre: a\n");
}

Test(my_printf, octal, .init = redirect_all_std)
{
	int nb = 10000;

	cr_assert(my_printf("%d en octal: %o\n", nb, nb) == 22);
	cr_assert_stdout_eq_str("10000 en octal: 23420\n");
}

Test(my_printf, hexa, .init = redirect_all_std)
{
	int nb = 123434;

	cr_assert(my_printf("%d en hexa: %X\n", nb, nb) == 22);
	cr_assert_stdout_eq_str("123434 en hexa: 1E22A\n");
}
