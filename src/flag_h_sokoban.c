/*
** EPITECH PROJECT, 2022
** flag h sokoban
** File description:
** for h sokoban
*/

#include "my.h"
#include "sokoban.h"

int flag_h_sokoban(void)
{
    my_printf("USAGE\n");
    my_printf("     ./my_sokoban map\n");
    my_printf("DESCRIPTION\n");
    my_printf("     map  file representing the warehouse map,");
    my_printf("containing '#' for walls,\n");
    my_printf("          'P' for player, 'X' for boxes");
    my_printf("and 'O' for storage locations.\n");
    return 0;
}
