/*
** EPITECH PROJECT, 2017
** Test Criterion
** File description:
** bistro-matic
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "n4s.h"

Test(simple, test)
{
	char *av[] = {"1", "1", "2", "3", "4", "5", "6", "2"};
	int a = errors(1, av);

	cr_assert(errors(1, av) == 84);
}
