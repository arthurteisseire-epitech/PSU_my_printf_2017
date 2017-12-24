/*
** EPITECH PROJECT, 2017
** File Name : tests-my_printf.c
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

Test(my_printf, simple_string, .init = redirect_all_std)
{
	my_printf("hello world");
	cr_assert_stdout_eq_str("hello world");
}

Test(my_printf, decimal1, .init = redirect_all_std)
{
	my_printf("%i\n", 57);
	cr_assert_stdout_eq_str("57\n");
}

Test(my_printf, decimal2, .init = redirect_all_std)
{
	my_printf("%d\n", 57);
	cr_assert_stdout_eq_str("57\n");
}

Test(my_printf, binary, .init = redirect_all_std)
{
	my_printf("%b\n", 57);
	cr_assert_stdout_eq_str("111001\n");
}

Test(my_printf, octal, .init = redirect_all_std)
{
	my_printf("%o\n", 57);
	cr_assert_stdout_eq_str("71\n");
}

Test(my_printf, S, .init = redirect_all_std)
{
	char str[2];

	str[0] = 57;
	str[1] = 'a';
	my_printf("%S\n", str);
	cr_assert_stdout_eq_str("\071a\n");
}
