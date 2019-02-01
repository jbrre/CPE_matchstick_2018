/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** lib
*/

#include "my.h"

char *my_strcpy(char *dest, char const *src)
{
    int i;

    for (i = 0 ; src[i] != '\0' ; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return (dest);
}