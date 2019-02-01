/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** lib
*/

#include "my.h"

void my_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}