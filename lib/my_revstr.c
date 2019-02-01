/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** lib
*/

#include "my.h"

char *my_revstr(char *str)
{
    char tmp;
    int i = 0;
    int size = my_strlen(str) - 1;

    while (i < size){
        tmp = str[i];
        str[i] = str[size];
        str[size] = tmp;
        i++;
        size--;
    }
    return (str);
}