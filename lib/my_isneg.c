/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** lib
*/

#include "my.h"

void my_isneg(int n)
{
    if (n < 0){
        my_putchar('N');
    }
    else if (n >= 0){
        my_putchar('P');
    }
}