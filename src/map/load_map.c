/*
** EPITECH PROJECT, 2022
** load map
** File description:
** load map in a 2d tab
*/

#include "my.h"
#include "sokoban.h"

char **load_map(const char *filepath, init_game_t *game)
{
    char *file = load_file_in_mem(filepath);
    char *temp = malloc(sizeof(char) * (MAP_MAX + 1));
    temp = empty_temp(temp, MAP_MAX + 1);
    char **map = mem_alloc_2d_array(MAP_MAX, MAP_ROW);
    int count_file = 0;
    int count_map = 0;
    for (count_file; count_map + 1 != MAP_ROW; count_file += 1) {
        for (int count_temp = 0; file[count_file] != '\n'; count_temp += 1) {
            temp[count_temp] = file[count_file];
            count_file += 1;
        }
        my_strcpy(map[count_map], temp);
        count_map += 1;
        temp = empty_temp(temp, MAP_MAX);
    }
    temp = last_line(file, temp, count_file, count_map);
    my_strcpy(map[count_map], temp);
    free(file);
    free(temp);
    return map;
}
