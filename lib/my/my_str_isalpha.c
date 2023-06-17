/*
** EPITECH PROJECT, 2022
** mystrisalpha
** File description:
** str is alpha
*/

int my_str_isalpha(char const *str)
{
    int i = 0;
    if (str[i] == '\0') {
        return 0;
    }
    while (str[i] != '\0') {
        if (str[i] < 'A' || str[i] > 'Z' && str[i] < 'a' || str[i] > 'z') {
            return 0;
        }
        i = i + 1;
    }
    return (1);
}
