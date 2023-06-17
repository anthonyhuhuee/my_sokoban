/*
** EPITECH PROJECT, 2022
** main
** File description:
** main
*/

#include "sokoban.h"

int main(int argc, char **argv)
{
    if (argv[1][0] == '-' && argv[1][1] == 'h') {
        flag_h_sokoban();
    } else {
        if (error(argv[1]) == EPITECH_ERROR) {
            return EPITECH_ERROR;
        }
        init_game_t *game = malloc(sizeof(init_game_t) * 5);
        MAP_MAX = max_line(argv[1]);
        MAP_ROW = count_row(argv[1]);
        char **map = load_map(argv[1], game);
        open_window(map, game);
        for (int count = 0; count != game->map_setting.row; count += 1) {
            free(map[count]);
        }
        free(game);
        return 0;
    }
}
