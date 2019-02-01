/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2018
** File description:
** matchstick main
*/

#include "../include/my.h"

void calculate_move(int *sticks_pos, game_t rules)
{
    int i;
    int p;

    my_printf("\nAI's turn...\n");
    while (1){
        i = rand() % rules.match_n;
        p = rand() % rules.lines_n;
        if (sticks_pos[p] >= i && i > 0)
            break;
    }
    sticks_pos[p] -= i;
    my_printf("AI removed %d match(es) from line %d\n", i, p+1);
}