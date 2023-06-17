/*
** EPITECH PROJECT, 2022
** check wall
** File description:
** check wall
*/

#include "sokoban.h"

int check_wall(char **map, int pos_x, int pos_y, init_game_t *game)
{
    switch (game->key_pressed) {
    case 1:
        if (map[pos_y - 1][pos_x] == '#') {
            return 1;
        }
    case 2:
        if (map[pos_y + 1][pos_x] == '#') {
            return 2;
        }
    case 3:
        if (map[pos_y][pos_x + 1] == '#') {
            return 3;
        }
    case 4:
        if (map[pos_y][pos_x - 1] == '#') {
            return 4;
        }
    default:
        break;
    }
}
