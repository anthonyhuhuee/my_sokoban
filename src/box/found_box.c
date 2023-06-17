/*
** EPITECH PROJECT, 2022
** found player
** File description:
** found player in the window
*/

#include "sokoban.h"

int found_box(char **map, init_game_t *game)
{
    int box_blocked = 0;
    for (int count_row = 0; count_row != MAP_ROW ; count_row += 1) {
        for (int count_cols = 0; count_cols != MAP_MAX; count_cols += 1) {
            box_blocked = check_box(map, game, count_row, count_cols);
            switch (box_blocked) {
            case 0:
                break;
            case 1:
                return 1;
            }
        }
    }
    return 0;
}
