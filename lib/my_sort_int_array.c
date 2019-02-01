/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** lib
*/

#include "my.h"

void my_sort_int_array(int *tab, int size)
{
    int i;
    int p;

    for (i = 0 ; i < size ; i++)
        for (p = 0 ; p < size - 1 - i ; p++)
            if (tab[p] > tab[p+1])
                my_swap(&tab[p], &tab[p+1]);
}