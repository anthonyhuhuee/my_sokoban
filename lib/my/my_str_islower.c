/*
** EPITECH PROJECT, 2022
** strislower
** File description:
** str is lower
*/

int my_str_islower(char const *str)
{
    int i = 0;
    if (str[i] == '\0') {
        return 0;
    }
    while (str[i] != '\0') {
        if (str[i] < 'a' || str[i] > 'z') {
            return 0;
        }
        i = i + 1;
    }
    return 1;
}
