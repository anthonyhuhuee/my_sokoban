/*
** EPITECH PROJECT, 2022
** is upper
** File description:
** is upper
*/

int my_str_isupper(char const *str)
{
    int i = 0;
    if (str[i] == '\0') {
        return 0;
    }
    while (str[i] != '\0') {
        if (str[i] < 'A' || str[i] > 'Z') {
            return 0;
        }
        i = i + 1;
    }
    return 1;
}
