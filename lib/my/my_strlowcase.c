/*
** EPITECH PROJECT, 2022
** str lowcase
** File description:
** str lowcase
*/

#include "my.h"

char *my_strlowcase(char *str)
{
    int i;
    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z')
        str[i] = str[i] + 32;
        i = i + 1;
    }
    return str;
}
