/*
** EPITECH PROJECT, 2018
** need4stek
** File description:
** moove and functionnality
*/

#include "n4s.h"

void turn(t_info *info, float speed)
{
	if (info->h_left < info->h_right || info->h_left < 50) {
		info->dir = -0.5 + speed;
		dprintf(1, "WHEELS_DIR:%f\n", -0.5 + speed);
	}
	else if (info->h_right < info->h_left || info->h_right < 50) {
		info->dir = 0.5 + speed;
		dprintf(1, "WHEELS_DIR:%f\n", 0.5 - speed);
	}
	else {
		info->dir = 0;
		dprintf(1, "WHEELS_DIR:%f\n", 0.0);
	}
}

int move(t_info *info)
{
	int end = detection_wall(info);

	if (end != 0)
		return (end);
	dprintf(1, "GET_INFO_LIDAR\n");
	end = parsing(info, 1);
	if (end != 0)
		return (end);
	return (0);
}
