/*
** EPITECH PROJECT, 2017
** 
** File description:
** Units test
*/

#include <sys/stat.h>
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "n4s.h"

Test(Get_next_line, first_line)
{
	int fd = open("Makefile", O_RDONLY);
	char *line = get_next_line(fd);

	cr_assert(line[0] == '#');
	cr_assert(line[1] == '#');
	close(fd);
}

Test(Get_next_line, Second_line)
{
	char *test = "## Makefile";
	int fd = open("Makefile", O_RDONLY);
	char *line = NULL;
	int i = 0;

	get_next_line(fd);
	get_next_line(fd);
	line = get_next_line(fd);
	while (test[i]) {
		cr_assert(line[i] == test[i]);
		i++;
	}
	close(fd);
}

Test(Get_next_line, Bad_fd)
{
	int fd = open("../test87", O_RDONLY);
	char *line = get_next_line(fd);
	int i = 0;

	cr_assert(line == NULL);
	close(fd);
}

Test(Get_next_line, bad_fd_two)
{
	int fd = open("tests/bidon", O_RDONLY);
	char *line = get_next_line(fd);
	int i = 0;

	cr_assert(line == NULL);
	close(fd);
}
