/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** lib
*/

#include "my.h"

int my_strlen(char const *str)
{
    int i = 0;
    int counter = 0;

    while (str[i] != '\0'){
        i++;
        counter++;
    }
    return (counter);
}