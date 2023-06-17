/*
** EPITECH PROJECT, 2022
** move_box_up
** File description:
** move box up
*/

#include "sokoban.h"

int move_box_down(char **map, init_game_t *game)
{
    if (map[PLAYER_MAP_Y + 2][PLAYER_MAP_X] != '#') {
        mvprintw(PLAYER_WIN_Y + 1, PLAYER_WIN_X, " ");
        mvprintw(PLAYER_WIN_Y + 2, PLAYER_WIN_X, "X");
        map[PLAYER_MAP_Y + 1][PLAYER_MAP_X] = ' ';
        map[PLAYER_MAP_Y + 2][PLAYER_MAP_X] = 'X';
        move_player_down(map, game);
    }
}
