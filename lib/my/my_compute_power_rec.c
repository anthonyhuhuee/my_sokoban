/*
** EPITECH PROJECT, 2022
** my_compute_rec
** File description:
** number by power but with recursive
*/

#include <unistd.h>

void    my_putchar(char c);

int     my_put_nbr(int nb);

int    my_compute_power_rec(int nb, int p)
{
    if (p == 0) {
        return (1);
    } else if (p < 0 || nb == 0) {
        return (0);
    } else {
        return (nb * my_compute_power_rec(nb, (p - 1)));
    }
    return (0);
}
