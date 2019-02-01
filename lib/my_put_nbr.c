/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** lib
*/

#include "my.h"

void my_put_nbr(int nb)
{
    int mod = 0;

    if (nb < 0){
        my_putchar('-');
        nb = -nb;
    }
    if (nb >= 0 && nb <= 9){
        my_putchar(nb + 48);
    }
    else{
        mod = nb % 10;
        nb = (nb - mod)/10;
        my_put_nbr(nb);
        my_putchar(48 + mod);
    }
}