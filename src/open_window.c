/*
** EPITECH PROJECT, 2022
** my_popup
** File description:
** print Hello world in ncurses terminal
*/

#include "sokoban.h"

int open_window(char **map, init_game_t *game)
{
    WINDOW *window = initscr();
    keypad(window, true);
    init_game(map, game);
    refresh();
    while (KEY != ' ') {
        KEY = getch();
        game->key_pressed = 0;
        change_position(game, map);
        if (found_box(map, game) == 1) {
            usleep(500000);
            return 0;
        }
        if (found_storage(map, game) == 1) {
            usleep(500000);
            return 1;
        }
        refresh();
    }
    endwin();
}
