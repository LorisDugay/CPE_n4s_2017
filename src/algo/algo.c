/*
** EPITECH PROJECT, 2018
** n4s
** File description:
** algorythme
*/

#include "n4s.h"

int algo(t_info *info)
{
	int end = 0;

	dprintf(1, "CAR_FORWARD:%f\n", 0.4);
	parsing(info, 0);
	info->dir = 0;
	while (end == 0) {
		end = move(info);
	}
	if (end == -1) {
		dprintf(1, "CAR_FORWARD:%f\n", 0.0);
		end = 0;
	}
	return (end);
}
