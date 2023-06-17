/*
** EPITECH PROJECT, 2022
** count row in a 1d file
** File description:
** count file in a 1d file
*/

#include "my.h"
#include "sokoban.h"

int count_row(const char *filepath)
{
    char *file = load_file_in_mem(filepath);
    int row = 0;
    for (int count_file = 0; file[count_file] != '\0'; count_file += 1) {
        if (file[count_file] == '\n' || file[count_file + 1] == '\0') {
            row += 1;
        }
    }
    free(file);
    return row;
}
