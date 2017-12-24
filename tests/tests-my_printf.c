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
