/*
** EPITECH PROJECT, 2022
** last line
** File description:
** last line
*/

#include "sokoban.h"

char *last_line(char *file, char *temp, int count_file, int count_map)
{
    for (int count_temp = 0; file[count_file] != '\0'; count_temp += 1) {
        temp[count_temp] = file[count_file];
        count_file += 1;
    }
    return temp;
}
