/*
** EPITECH PROJECT, 2022
** load file in mem
** File description:
** open file and return buff
*/

#include "sokoban.h"

char *load_file_in_mem(char const *filepath)
{
    int fd;
    struct stat s;
    stat(filepath, &s);
    fd = open(filepath, O_RDONLY);
    char *buffer = malloc(sizeof(char) * (s.st_size + 1));
    read(fd, buffer, s.st_size);
    buffer[s.st_size] = '\0';
    close (fd);
    return buffer;
}
