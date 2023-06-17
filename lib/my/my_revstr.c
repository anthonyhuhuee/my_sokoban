/*
** EPITECH PROJECT, 2022
** my_revstr
** File description:
** reverse string
*/

int my_strlen(char const *str);

char *my_revstr(char *str)
{
    int start = 0;
    int end = my_strlen(str) - 1;
    char temp;
    while (start < end) {
        temp = str[end];
        str[end] = str[start];
        str[start] = temp;
        start += 1;
        end -= 1;
    }
    return (str);
}
