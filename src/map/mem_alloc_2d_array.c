/*
** EPITECH PROJECT, 2022
** mem alloc 2d array
** File description:
** create a 2d array et returns it
*/

#include "sokoban.h"

char **mem_alloc_2d_array(int nb_rows, int nb_cols)
{
    char **tab = malloc(sizeof(int *) * (nb_cols + 1));
    int count = 0;

    while (count < nb_cols) {
        tab[count] = malloc(sizeof(int) * nb_rows);
        count += 1;
    }
    tab[count] = NULL;
    return tab;
}
