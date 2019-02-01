/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** lib
*/

#include "my.h"

int my_compute_square_root(int nb)
{
    int rac = 1;
    int sqrt = 0;

    while (rac <= nb){
        sqrt = rac * rac;
        if (sqrt == nb)
            return (rac);
        rac++;
    }
    return (0);
}