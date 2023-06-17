/*
** EPITECH PROJECT, 2022
** my_strncat
** File description:
** pen apple but res = applep
*/

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0;
    int x = 0;
    while (dest[i] != '\0') {
        i = i + 1;
    }
    while (x != nb) {
        dest[i + x] = src[x];
        x = x + 1;
    }
    dest[i + x] = '\0';
    return dest;
}
