/*
** EPITECH PROJECT, 2017
** N4S
** File description:
** struct.h
*/

#ifndef __DEF_STRUCT_H__
#define __DEF_STRUCT_H__

typedef enum e_enum
{
	No_info = 0,
	Info,
}e_info;

typedef struct s_info
{
	float h_left;
	float left;
	float mid;
	float right;
	float h_right;
	float dir;
}t_info;

#endif
