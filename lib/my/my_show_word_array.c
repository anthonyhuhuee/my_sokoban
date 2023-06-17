/*
** EPITECH PROJECT, 2022
** show_word_array
** File description:
** show word in a tab 1 per 1
*/

#include <stdlib.h>
#include "my.h"

int my_show_word_array(char * const *tab)
{
    int i = 0;
    while (*tab[i] != '\0') {
        my_putstr(tab[i]);
        my_putchar('\n');
        i = i + 1;
    }
    return 0;
}
