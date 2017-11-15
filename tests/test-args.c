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

Test(my_printf, char, .init = redirect_all_std)
{
	cr_assert(my_printf("Lettre: %c\n", 'a') == 10);
	cr_assert_stdout_eq_str("Lettre: a\n");
}

Test(my_printf, string, .init = redirect_all_std)
{
	cr_assert(my_printf("toto et %s ont %d ans\n", "lala", 12) == 24);
	cr_assert_stdout_eq_str("toto et lala ont 12 ans\n");
}

Test(my_printf, number, .init = redirect_all_std)
{
	int nb = -8773043;

	cr_assert(my_printf("-8773043 == %d == %i\n", nb, nb) == 33);
	cr_assert_stdout_eq_str("-8773043 == -8773043 == -8773043\n");
}

Test(my_printf, unsigned, .init = redirect_all_std)
{
	int nb = 4294967293;

	cr_assert(my_printf("4294967293 == %u\n", nb) == 25);
	cr_assert_stdout_eq_str("4294967293 == 4294967293\n");
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

	cr_assert(my_printf("%d en hexa_up: %X, et en hexa_low: %x\n", nb, nb, nb) == 48);
	cr_assert_stdout_eq_str("123434 en hexa_up: 1E22A, et en hexa_low: 1e22a\n");
}

Test(my_printf, bin, .init = redirect_all_std)
{
	int nb = 123434;

	cr_assert(my_printf("%d en binaire: %b\n", nb, nb) == 37);
	cr_assert_stdout_eq_str("123434 en binaire: 11110001000101010\n");
}

Test(my_printf, str_oct, .init = redirect_all_std)
{
	char str[] = "toto";
	char *res = "t\\177to\n";

	str[1] = 127;
	cr_assert(my_printf("%S\n", str) == 8);
	cr_assert_stdout_eq_str(res);
}

Test(my_printf, pourcent, .init = redirect_all_std)
{
	cr_assert(my_printf("%%\n%%%%") == 4);
	cr_assert_stdout_eq_str("%\n%%");
}
