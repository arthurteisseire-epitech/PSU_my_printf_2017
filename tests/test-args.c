/*
** EPITECH PROJECT, 2017
** File Name : tests.c
** File description:
** By Arthur Teisseire
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

void redirect_all_std(void)
{
	cr_redirect_stdout();
	cr_redirect_stderr();
}

Test(my_printf, 1, .init = redirect_all_std)
{
	cr_assert(my_printf("toto et %s ont %d ans\n", "lala", -12) == 25);
	cr_assert_stdout_eq_str("toto et lala ont -12 ans\n");
}

Test(my_printf, 2, .init = redirect_all_std)
{
	int nb = 10000;

	my_printf("%d en octal: %o\n", nb, nb);
	cr_assert_stdout_eq_str("10000 en octal: 23420\n");
}
