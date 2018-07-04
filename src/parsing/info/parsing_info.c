/*
** EPITECH PROJECT, 2018
** N4S
** File description:
** parsing info
*/

#include <stdlib.h>
#include "unistd.h"
#include "n4s.h"

int parsing_info(t_info *info, char **tab)
{
	info->h_left = (atof(tab[4]) + atof(tab[3])) / 2;
	info->left = (atof(tab[12]) + atof(tab[13])) / 2;
	info->mid = (atof(tab[19]) + atof(tab[20])) / 2;
	info->right = (atof(tab[25]) + atof(tab[26])) / 2;
	info->h_right = (atof(tab[34]) + atof(tab[33])) / 2;
	return (0);
}
