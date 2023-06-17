/*
** EPITECH PROJECT, 2022
** check player
** File description:
** check player
*/

#include "sokoban.h"

int check_box(char **map, init_game_t *game, int count_row, int count_cols)
{
    if (map[count_row][count_cols] == 'X') {
        if (map[count_row - 1][count_cols] == '#' &&
        map[count_row][count_cols + 1] == '#') {
            return 1;
        }
        if (map[count_row - 1][count_cols] == '#' &&
        map[count_row][count_cols - 1] == '#') {
            return 1;
        }
        if (map[count_row + 1][count_cols] == '#' &&
        map[count_row][count_cols - 1] == '#') {
            return 1;
        }
        if (map[count_row + 1][count_cols] == '#' &&
        map[count_row][count_cols + 1] == '#') {
            return 1;
        }
        return 0;
    }
}
