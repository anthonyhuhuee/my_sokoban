/*
** EPITECH PROJECT, 2022
** move_box_up
** File description:
** move box up
*/

#include "sokoban.h"

int move_box_right(char **map, init_game_t *game)
{
    if (map[PLAYER_MAP_Y][PLAYER_MAP_X + 2] != '#') {
        mvprintw(PLAYER_WIN_Y, PLAYER_WIN_X + 1, " ");
        mvprintw(PLAYER_WIN_Y, PLAYER_WIN_X + 2, "X");
        map[PLAYER_MAP_Y][PLAYER_MAP_X + 1] = ' ';
        map[PLAYER_MAP_Y][PLAYER_MAP_X + 2] = 'X';
        move_player_right(map, game);
    }
}
