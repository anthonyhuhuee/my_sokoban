/*
** EPITECH PROJECT, 2022
** my_strncpy
** File description:
** copy n character from a string to another
*/

int my_strlen(char const *str);

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;
    while (i != n) {
        dest[i] = src[i];
        i = i + 1;
        if (i == my_strlen(src)) {
            dest[i] = '\0';
        }
    }
    return (dest);
}
