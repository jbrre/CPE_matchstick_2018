/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** lib
*/

#include "my.h"

int my_find_prime_sup(int nb)
{
    int i = 2;

    if (nb < i && nb < 0)
        return (2);
    while (i < nb){
        if (nb%i == 0){
            nb = my_find_prime_sup(nb+1);
        }
        i++;
    }
    return (nb);
}