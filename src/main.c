/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** main
*/

#include "unistd.h"
#include "n4s.h"

int main(UNUSED int ac, UNUSED char **av)
{
	t_info info;

	WRITE_DEFINE(START_PROG);
	if (parsing(&info, 0) == 0) {
		WRITE_DEFINE(GET_INFO);
		parsing(&info, 1);
		algo(&info);
		write(1, "STOP_SIMULATION\n", 17);
		return (0);
	}
	return (0);
}
