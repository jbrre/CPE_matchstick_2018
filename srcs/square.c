/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2018
** File description:
** square
*/

#include "../include/my.h"

void print_square(char **square, int dimensions)
{
    int i;

    for (i = 0 ; i < dimensions+2 ; i++)
        my_printf("%s\n", square[i]);
}

void put_sticks_in_array(char **square, int *sticks, int dimensions)
{
    int i;
    int p;
    int d = 0;
    int lenght = (dimensions * 2);
    int height = (dimensions + 2);

    for (i = 1 ; i < height-1 ; i++)
        for (p = 1 ; p <= lenght-1 ; p++)
            square[i][p] = ' ';
    for (i = 1 ; i < height - 1 ; i++){
        p = height - i - 1;
        for (d = 0 ; d < sticks[i-1] ; d++){
            square[i][p] = '|';
            p++;
        }
    }
}

int *determinate_number_sticks(int height)
{
    int i = 1;
    int p = 0;
    int *tab = malloc(sizeof(int)*height);

    while (p < height){
        tab[p] = i;
        i += 2;
        p++;
    }
    return (tab);
}

char **generate_double_square(int dimensions)
{
    int i = 0;
    int p = 0;
    int lenght = (dimensions * 2);
    int height = dimensions + 2;
    char **square_game;

    square_game = malloc(sizeof(char*)*height);
    for (i = 0 ; i < height ; i++)
        square_game[i] = malloc(sizeof(char)*lenght);
    for (i = 0 ; i < height ; i++)
        for (p = 0 ; p <= lenght ; p++)
            square_game[i][p] = ' ';
    for (i = 0 ; i < height ; i++){
        square_game[i][0] = '*';
        square_game[i][lenght] = '*';
    }
    for (i = 0 ; i < lenght ; i++){
        square_game[0][i] = '*';
        square_game[height-1][i] = '*';
    }
    return (square_game);
}