/*
** EPITECH PROJECT, 2022
** move player up
** File description:
** move player up
*/

#include "sokoban.h"

void move_player_up(char **map, init_game_t *game)
{
    mvprintw(PLAYER_WIN_Y, PLAYER_WIN_X, " ");
    mvprintw(PLAYER_WIN_Y - 1, PLAYER_WIN_X, "P");
    map[PLAYER_MAP_Y][PLAYER_MAP_X] = ' ';
    map[PLAYER_MAP_Y - 1][PLAYER_MAP_X] = 'P';
    PLAYER_WIN_Y -= 1;
    PLAYER_MAP_Y -= 1;
    if (game->on_box == 1) {
        map[PLAYER_MAP_Y + 1][PLAYER_MAP_X] = 'O';
        game->on_box = 0;
    }
}
