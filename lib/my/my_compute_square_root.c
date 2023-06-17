/*
** EPITECH PROJECT, 2022
** my_compute_square_root
** File description:
** calcul square
*/

#include <unistd.h>

void    my_putchar(char c);

int     my_put_nbr(int nb);

int    my_compute_square_root(int nb)
{
    int compare = 1;
    while (compare * compare != nb) {
        if (compare * compare < nb) {
            compare += 1;
        } else {
            return (0);
        }
    }
    return (compare);
}
