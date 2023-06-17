/*
** EPITECH PROJECT, 2022
** my_is_prime
** File description:
** all prime number
*/

int    my_is_prime(int nb)
{
    int i = 2;
    while (i < (nb / 2)) {
        if (nb % i == 0) {
            return (0);
        }
        i += 1;
    }
    return (0);
}
