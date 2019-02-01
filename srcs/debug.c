/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2018
** File description:
** matchstick main
*/

#include "../include/my.h"

int debug(int ac, char **av)
{
    int i;
    int p;

    if (ac != 3){
        my_printf("Invalid number of arguments.\n");
        return (84);
    }
    i = my_getnbr(av[1]);
    p = my_getnbr(av[2]);
    if (i < 1 || i > 99 || p < 1){
        my_printf("Invalid lines or matches number.\n");
        return (84);
    }
    return (0);
}