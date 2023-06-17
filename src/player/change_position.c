/*
** EPITECH PROJECT, 2022
** change_position
** File description:
** it move da player
*/

#include "sokoban.h"

void change_position(init_game_t *game, char **map)
{
    switch (KEY) {
    case KEY_UP:
        key_up(game, map);
        break;
    case KEY_DOWN:
        key_down(game, map);
        break;
    case KEY_RIGHT:
        key_right(game, map);
        break;
    case KEY_LEFT:
        key_left(game, map);
        break;
    default:
        break;
    }
}
