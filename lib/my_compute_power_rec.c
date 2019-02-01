/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** lib
*/

#include "my.h"

int my_compute_power_rec(int nb, int power)
{
    if (nb == 0)
        return (1);
    if (nb < 0)
        return (0);
    return (nb * (my_compute_power_rec(nb, power - 1)));
}