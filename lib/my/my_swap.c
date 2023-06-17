/*
** EPITECH PROJECT, 2022
** my_swap
** File description:
** swap a & b
*/

#include <unistd.h>

int    my_swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
    return (0);
}
