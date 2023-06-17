/*
** EPITECH PROJECT, 2022
** my_strcpy
** File description:
** copy string into another
*/

int my_strlen(char const *str);

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;
    while (i != my_strlen(src)) {
        dest[i] = src[i];
        i = i + 1;
    }
    dest[i] = '\0';
    return (dest);
}
