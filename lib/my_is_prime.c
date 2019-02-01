/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** lib
*/

#include "my.h"

int my_is_prime(int nb)
{
    int i = 2;

    if (nb < i && nb < 0)
        return 0;
    while (i < nb){
        if (nb%i == 0){
            return (0);
        }
        i++;
    }
    return (1);
}