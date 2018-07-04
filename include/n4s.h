/*
** EPITECH PROJECT, 2018
** N4S.h
** File description:
** Need 4 Streak .h
*/

#ifndef __N4S_H__
#define __N4S_H__

#include <stdio.h>
#include "struct.h"
#include "def.h"
#include "display.h"

int errors(int, char**);
char *get_next_line(int);
int my_strlen(char*);
char **my_str_to_word_array(char *str);
int verif_value(char **tab);
int parsing(t_info *info, int scan);
int parsing_info(t_info *info, char **tab);
int info(t_info *info);
int move(t_info *info);
int algo(t_info *info);
int detection_wall(t_info *info);
void turn(t_info *info, float);

#endif
