/*
** EPITECH PROJECT, 2018
** N4S
** File description:
** verif good return
*/

#include "n4s.h"

static int search_end(char *str)
{
	int index = 1;

	if (str[index + 0] == '[' && str[index + 1] == '-') {
		if (str[index + 2] == '1')
			return (1);
	}
	return (0);
}

int verif_value(char **tab)
{
	int index = 0;

	while (tab && tab[index])
		index++;
	index--;
	if (search_end(tab[index]) == 1)
		return (-1);
	if (tab && *tab && tab[0][0] == '1' && !tab[0][1])
		return (0);
	return (84);
}
