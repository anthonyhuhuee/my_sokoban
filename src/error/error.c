/*
** EPITECH PROJECT, 2022
** error
** File description:
** error
*/

#include "sokoban.h"

int error(const char *filepath)
{
    int fd = open(filepath, O_RDONLY);
    if (fd == -1) {
        return EPITECH_ERROR;
    } else {
        if (error_char(filepath, fd) == EPITECH_ERROR) {
            return EPITECH_ERROR;
        }
    }
    close(fd);
    return 0;
}
