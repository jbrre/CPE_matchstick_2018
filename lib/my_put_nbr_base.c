/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** lib
*/

#include "my.h"

void my_put_nbr_base(int nb, char const *base)
{
    int mod = 0;
    int len = my_strlen(base);

    if (nb < 0){
        my_putchar('-');
        nb = -nb;
    }
    if (nb >= 0 && nb <= len-1){
        my_putchar(nb + base[0]);
    }
    else{
        mod = nb % len;
        nb = (nb - mod)/len;
        my_put_nbr_base(nb, base);
        my_putchar(base[mod]);
    }
}