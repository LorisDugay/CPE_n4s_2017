/*
** EPITECH PROJECT, 2018
** need for stek
** File description:
** detection wall and spee
*/

#include "n4s.h"

int	detection_wall(t_info *info)
{
	int index = 0;
	int read = 0;
	float forward[] = {-0.5, 50, 100, 300, 400, 500, 600, 700, 1800, -1};
	float forw[] = {-0.5, 50, 100, 150, 200, 250, 300, 350, 400, -1};
	float forwar[] = {0.025, 0.5, 0.1, 0.15, 0.2, 0.3, 0.35, 0.4, 1};

	while (info->mid > forward[index] && info->h_right > forw[index] &&
		info->h_left > forw[index] &&forward[index] != -1)
		index++;
	dprintf(1, "CAR_FORWARD:%f\n", forwar[index - 1]);
	read = parsing(info, 0);
	if (read != 0)
		return (read);
	if (info->mid <= 700 || info->dir != 0) {
		if (forwar[index - 1] == 1)
			forwar[index - 1] = 0.49;
		turn(info, forwar[index - 1]);
		return (parsing(info, 0));
	}
	return (0);
}
