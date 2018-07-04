/*
** EPITECH PROJECT, 2018
** piscine
** File description:
** my_str_to_word_array
*/

#include <stdlib.h>
#include "get_next_line.h"

static int	count_words(char *str)
{
	int nb_word = 0;
	int index = 0;

	while (str[index]) {
		if (str[index] == 58)
			nb_word++;
		index++;
	}
	return (nb_word + 1);
}

static char *cnt_letter(char *str, int cnt, int *word)
{
	int index = 0;
	int index_tab = 0;
	char *tab = NULL;

	while (str[cnt] && str[cnt] != 58) {
		cnt++;
		index++;
	}
	*word = *word + 1;
	if (!(tab = malloc(sizeof(char) * (index + 1))))
		return (NULL);
	while (str[*word] && str[*word] != 58) {
		tab[index_tab] = str[*word];
		*word = *word + 1;
		index_tab++;
	}
	tab[index_tab] = '\0';
	return (tab);
}

char	**my_str_to_word_array(char *str)
{
	int	words = count_words(str);
	int	cnt = 0;
	int	index_res = 1;
	char	**res = malloc(sizeof(char*) * (words + 1));

	if (!res)
		return (NULL);
	res[0] = malloc(sizeof(char) * 2);
	res[0][0] = str[0];
	res[0][1] = '\0';
	while (str[cnt]) {
		if (str[cnt] == 58) {
			res[index_res] = cnt_letter(str, cnt + 1 , &cnt);
			index_res++;
		} else
			cnt++;
	}
	res[index_res] = NULL;
	return (res);
}
