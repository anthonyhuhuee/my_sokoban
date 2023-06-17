/*
** EPITECH PROJECT, 2022
** move up
** File description:
** move up
*/

#include "sokoban.h"

int key_right(init_game_t *game, char **map)
{
    game->key_pressed = 3;
    if (check_wall(map, PLAYER_MAP_X, PLAYER_MAP_Y, game) == 3) {
        return 0;
    }
    if (map[PLAYER_MAP_Y][PLAYER_MAP_X + 1] == 'O') {
        move_player_right(map, game);
        game->on_box = 1;
        return 0;
    }
    if (map[PLAYER_MAP_Y][PLAYER_MAP_X + 1] == 'X') {
        move_box_right(map, game);
    } else {
        move_player_right(map, game);
    }
    print_map(map, game);
    refresh();
    return game->key_pressed = 0;
}
