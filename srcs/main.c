/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2018
** File description:
** matchstick main
*/

#include "../include/my.h"

int main(int ac, char **av)
{
    int dimensions;
    char **tab_array;
    int *nb_sticks;
    game_t rules;

    if (debug(ac, av) == 84)
        return (84);
    dimensions = my_getnbr(av[1]);
    nb_sticks = determinate_number_sticks(dimensions);
    tab_array = generate_double_square(dimensions);
    rules.match_n = my_getnbr(av[2]);
    rules.lines_n = dimensions;
    put_sticks_in_array(tab_array, nb_sticks, dimensions);
    print_square(tab_array, dimensions);
    my_putchar('\n');
    return (game(tab_array, nb_sticks, dimensions, rules));
}