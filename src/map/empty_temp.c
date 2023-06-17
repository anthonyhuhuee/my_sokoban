/*
** EPITECH PROJECT, 2022
** empty temp
** File description:
** empty temp
*/

#include "my.h"
#include "sokoban.h"

char *empty_temp(char *temp, int max)
{
    for (int count = 0; count != max; count += 1) {
        temp[count] = '\0';
    }
    return temp;
}
