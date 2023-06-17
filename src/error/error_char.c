/*
** EPITECH PROJECT, 2022
** error char
** File description:
** char is not . or o
*/

#include "my.h"
#include "sokoban.h"

int error_char(const char *filepath, int fd)
{
    struct stat stat_file;
    stat(filepath, &stat_file);
    fd = open(filepath, O_RDONLY);
    char *buffer = malloc(sizeof(char) * (stat_file.st_size + 1));
    read(fd, buffer, stat_file.st_size);
    buffer[stat_file.st_size] = '\0';
    for (int count = 0; buffer[count] != '\0'; count += 1) {
        switch (buffer[count]) {
        case '#':
        case '\n':
        case ' ':
        case 'P':
        case 'O':
        case 'X':
            break;
        default:
            return EPITECH_ERROR;
        }
    }
    return 0;
}
