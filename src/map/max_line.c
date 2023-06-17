/*
** EPITECH PROJECT, 2022
** max line if a 1d file
** File description:
** max line
*/

#include "my.h"
#include "sokoban.h"

int max_line(const char *filepath)
{
    char *file = load_file_in_mem(filepath);
    int count_temp = 0;
    int count_col = 0;
    int max_line = 0;
    for (int count_file = 0; file[count_file] != '\0'; count_file += 1) {
        if (file[count_file] == '\n' || file[count_file + 1] == '\0') {
            count_col = count_temp - 1;
            count_temp = 0;
        }
        count_temp += 1;
        if (max_line < count_col) {
            max_line = count_col;
        }
    }
    free(file);
    return max_line;
}
