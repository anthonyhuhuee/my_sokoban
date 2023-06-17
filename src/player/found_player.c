/*
** EPITECH PROJECT, 2022
** found player
** File description:
** found player in the window
*/

#include "sokoban.h"

int found_player(char **map, init_game_t *game)
{
    for (int count_row = 0; count_row != MAP_ROW ; count_row += 1) {
        for (int count_cols = 0; count_cols != MAP_MAX; count_cols += 1) {
            check_player(map, game, count_row, count_cols);
        }
    }
    return 0;
}
