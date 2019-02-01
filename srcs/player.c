/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2018
** File description:
** matchstick main
*/

#include "../include/my.h"

int lines_check(int lines, int pos)
{
    if (pos > lines || pos == 0){
        my_printf("Error: this line is out of range\n");
        return (-1);
    }
    else if (pos < 0){
        my_printf("Error: invalid input (positive number expected)\n");
        return (-1);
    }
    else
        return (1);
}

int match_check(int matches, int number, int *tab_matches, int pos)
{
    if (number < 0){
        my_printf("Error: invalid input (positive number expected)\n");
        return (-1);
    }
    if (number == 0){
        my_printf("Error: you have to remove at least one match\n");
        return (-1);
    }
    if (number > matches){
        my_printf("Error: you cannot move more than ");
        my_printf("%d matches per turn\n", matches);
        return (-1);
    }
    if (tab_matches[pos-1] - number < 0){
        my_printf("Error: not enough matches on this line\n");
        return (-1);
    }
    else
        return (1);
}

player_t player_turn(game_t rules, int *matches)
{
    player_t turn;

    my_printf("Your turn:\n");
    do {
        do {
            my_printf("Line: ");
            turn.line = my_scanner();
            if (turn.line == 1488)
                return (turn);
        } while (lines_check(rules.lines_n, turn.line) != 1);
            my_printf("Matches: ");
            turn.match = my_scanner();
            if (turn.match == 1488)
                return (turn);
    } while (match_check(rules.match_n, turn.match, matches, turn.line) != 1);
    return (turn);
}