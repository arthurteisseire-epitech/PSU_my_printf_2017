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

Test(my_printf, disp, .init = redirect_all_std)
{
	my_printf("csiis", 'X', "hi", 10, -3, "plop");
	cr_assert_stdout_eq_str("X\nhi\n10\n-3\nplop\n");
}
