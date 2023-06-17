/*
** EPITECH PROJECT, 2022
** strncmp
** File description:
** str n cmp
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;
    int res = 0;
    while (i != n - 1) {
        if (s1[i] != s2[i]) {
            res = s1[i] - s2[i];
            return res;
        }
        i = i + 1;
    }
    return 0;
}
