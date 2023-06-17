/*
** EPITECH PROJECT, 2022
** check player
** File description:
** check player
*/

#include "sokoban.h"

int check_storage(char **map, init_game_t *game, int count_row, int count_cols)
{
    if (map[count_row][count_cols] == 'O') {
        game->storage_present += 1;
    }
    if (game->on_box == 1) {
        game->storage_present += 1;
    }
}
