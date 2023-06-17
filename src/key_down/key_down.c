/*
** EPITECH PROJECT, 2022
** move up
** File description:
** move up
*/

#include "sokoban.h"

int key_down(init_game_t *game, char **map)
{
    game->key_pressed = 2;
    if (check_wall(map, PLAYER_MAP_X, PLAYER_MAP_Y, game) == 2) {
        return 0;
    }
    if (map[PLAYER_MAP_Y + 1][PLAYER_MAP_X] == 'O') {
        move_player_down(map, game);
        game->on_box = 1;
        return 0;
    }
    if (map[PLAYER_MAP_Y + 1][PLAYER_MAP_X] == 'X') {
        move_box_down(map, game);
    } else {
        move_player_down(map, game);
    }
    print_map(map, game);
    refresh();
    return game->key_pressed = 0;
}
