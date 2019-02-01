/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** lib
*/

#include "my.h"

int my_getnbr(char const *str)
{
    int i;
    int result;

    result = 0;
    i = 0;
    if (str[i] == '-' || str[i] == '+')
        i++;
    while ((str[i] >= '0') && (str[i] <= '9'))
    {
        result = (result * 10) + (str[i] - 48);
        i++;
    }
    if (str[0] == '-')
        result = result * (-1);
    return (result);
}