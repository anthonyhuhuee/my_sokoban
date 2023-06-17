/*
** EPITECH PROJECT, 2022
** print map
** File description:
** print map in a new function cause filepath needed for my struct
*/

#include "sokoban.h"
#include "my.h"

void print_map(char **new_map, init_game_t *game)
{
    for (int count = 0; count != MAP_ROW; count += 1) {
        mvprintw(WINDOW_Y + count, WINDOW_X, "%s\n", new_map[count]);
    }
}
