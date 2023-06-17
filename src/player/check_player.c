/*
** EPITECH PROJECT, 2022
** check player
** File description:
** check player
*/

#include "sokoban.h"

void check_player(char **map, init_game_t *game, int count_row, int count_cols)
{
    if (map[count_row][count_cols] == 'P') {
        PLAYER_WIN_X = WINDOW_X + count_cols;
        PLAYER_WIN_Y = WINDOW_Y + count_row;
        PLAYER_MAP_X = count_cols;
        PLAYER_MAP_Y = count_row;
    }
}
