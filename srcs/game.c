/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2018
** File description:
** matchstick main
*/

#include "../include/my.h"

int count_matches(int size, int *stick)
{
    int i;
    int result = 0;

    for (i = 0 ; i < size ; i++)
        result += stick[i];
    return (result);
}

int my_scanner(void)
{
    char *str = NULL;
    size_t len = 255;
    int value;
    int read;

    read = getline(&str, &len, stdin);
    if (read == -1)
        return (1488);
    value = my_getnbr(str);
    return (value);
}

void refresh(char **tab_array, int *nb_sticks, int dimensions)
{
    put_sticks_in_array(tab_array, nb_sticks, dimensions);
    print_square(tab_array, dimensions);
}

int check_victory(int param, int *nb_sticks, int size)
{
    int i = count_matches(size, nb_sticks);

    if (i == 0){
        if (param == 0){
            my_printf("You lost, too bad...\n");
            return (-42);
        }
        if (param == 1){
            my_printf("I lost... snif... but I'll get you next time!!\n");
            return (42);
        }
    }
    return (0);
}

int game(char **tab_array, int *nb_sticks, int dimensions, game_t rules)
{
    player_t turn;

    while (42){
        turn = player_turn(rules, nb_sticks);
        if (turn.line == 1488 || turn.match == 1488)
            return (0);
        nb_sticks[turn.line-1] -= turn.match;
        my_printf("Player removed %d match(es) ", turn.match);
        my_printf("from line %d\n", turn.line);
        refresh(tab_array, nb_sticks, dimensions);
        if (check_victory(0, nb_sticks, rules.lines_n) == -42)
            return (2);
        calculate_move(nb_sticks, rules);
        refresh(tab_array, nb_sticks, dimensions);
        if (check_victory(1, nb_sticks, rules.lines_n) == 42)
            return (1);
        my_putchar('\n');
    }
}