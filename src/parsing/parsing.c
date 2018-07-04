/*
** EPITECH PROJECT, 2018
** N4S
** File description:
** Parsing
*/

#include <stdlib.h>
#include "n4s.h"

int parsing(t_info *info, int scan)
{
	char * str = get_next_line(0);
	char **tab = my_str_to_word_array(str);
	int quit = verif_value(tab);

	if (scan == 1 && quit != 84) {
		parsing_info(info, tab);
	}
	free(str);
	return (quit);
}
