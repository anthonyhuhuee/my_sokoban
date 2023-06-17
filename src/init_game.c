/*
** EPITECH PROJECT, 2022
** init_game
** File description:
** all value for game
*/

#include "sokoban.h"

void init_game(char **map, init_game_t *game)
{
    WINDOW_X = (COLS / 2) - (MAP_MAX / 2);
    WINDOW_Y = (LINES / 2) - (MAP_ROW / 2);
    print_map(map, game);
    found_player(map, game);
    found_box(map, game);
    found_storage(map, game);
}
