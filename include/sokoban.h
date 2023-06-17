/*
** EPITECH PROJECT, 2022
** my_l.h
** File description:
** h of my ls
*/

#ifndef sokoban_
    #define sokoban_
    #define EPITECH_ERROR 84
    #include "my.h"
    #include <ncurses.h>
    #include <string.h>
    #include <sys/stat.h>
    #include <fcntl.h>
    #include <unistd.h>
    #include <stdlib.h>
    #define WINDOW_Y game->wind_pos.x
    #define WINDOW_X game->wind_pos.y
    #define KEY game->wind_pos.key
    #define MAP_MAX game->map_setting.line_max
    #define MAP_ROW game->map_setting.row
    #define PLAYER_WIN_X game->player.player_pos_win_x
    #define PLAYER_WIN_Y game->player.player_pos_win_y
    #define PLAYER_MAP_X game->player.player_pos_map_x
    #define PLAYER_MAP_Y game->player.player_pos_map_y

typedef struct map_settings_s {
    int row;
    int line_max;
} map_settings_t;

typedef struct window_pos_s {
    int x;
    int y;
    int key;
} window_pos_t;

typedef struct player_s {
    int player_pos_win_x;
    int player_pos_win_y;
    int player_pos_map_x;
    int player_pos_map_y;
} player_t;

typedef struct init_box_s {
    int box_pos_win_x;
    int box_pos_win_y;
    int box_pos_map_x;
    int box_pos_map_y;
} init_box_t;

typedef struct init_game_s {
    map_settings_t map_setting;
    window_pos_t wind_pos;
    player_t player;
    int key_pressed;
    int on_box;
    int storage_present;
} init_game_t;

int error(const char *filepath);
int error_char(const char *filepath, int fd);

int open_window(char **map, init_game_t *game);
int flag_h_sokoban(void);
int count_row(const char *filepath);
int max_line(const char *filepath);

char *load_file_in_mem(char const *filepath);
char *empty_temp(char *temp, int max);
char **mem_alloc_2d_array(int nb_rows, int nb_cols);
char **load_map(const char *filepath, init_game_t *game);
char *last_line(char *file, char *temp, int count_file, int count_map);

void init_game(char **map, init_game_t *game);

void print_map(char **new_map, init_game_t *game);

int found_player(char **map, init_game_t *game);
void check_player(char **map, init_game_t *game, int count_row, int count_cols);

void change_position(init_game_t *def, char **map);
int check_wall(char **map, int pos_x, int pos_y, init_game_t *game);

int key_up(init_game_t *game, char **map);
int move_box_up(char **map, init_game_t *game);
void move_player_up(char **map, init_game_t *game);

int key_down(init_game_t *game, char **map);
int move_box_down(char **map, init_game_t *game);
void move_player_down(char **map, init_game_t *game);

int key_right(init_game_t *game, char **map);
int move_box_right(char **map, init_game_t *game);
void move_player_right(char **map, init_game_t *game);

int key_left(init_game_t *game, char **map);
int move_box_left(char **map, init_game_t *game);
void move_player_left(char **map, init_game_t *game);

int found_box(char **map, init_game_t *game);
int check_box(char **map, init_game_t *game, int count_row, int count_cols);

int found_storage(char **map, init_game_t *game);
int check_storage(char **map, init_game_t *game, int count_row, int count_cols);


#endif /* !my_ls */
