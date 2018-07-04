/*
** EPITECH PROJECT, 2017
** Test Criterion
** File description:
** bistro-matic
*/

#include <unistd.h>
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "n4s.h"

Test(no_arg, zeo_letter)
{
	cr_assert(my_strlen(NULL) == 0);
}

Test(seven_arg, seven_letter)
{
	cr_assert(my_strlen("Bonsoir") == 7);
}
