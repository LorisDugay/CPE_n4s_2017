/*
** EPITECH PROJECT, 2018
** N4S
** File description:
** display.h
*/

#ifndef __DISPLAY_H__
#define __DISPLAY_H__

#include <unistd.h>

#define WRITE_DEFINE(str) write(1, (str), sizeof((str)) - 1)

#undef         START_PROG
#define        START_PROG                      \
"START_SIMULATION\n"

#undef         STOP_PROG
#define        STOP_PROG                      \
"STOP_SIMULATION\n"

#undef         GET_SPEED
#define        GET_SPEED                      \
"GET_CURRENT_SPEED\n"

#undef         GET_INFO
#define        GET_INFO                      \
"GET_INFO_LIDAR\n"

#endif
