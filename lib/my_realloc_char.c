/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** lib
*/

#include "../include/my.h"

char *my_realloc_char(char *ptr, int size)
{
    char *temp = ptr;
    int i = 0;

    ptr = malloc(sizeof(char)*size);
    while (ptr[i] != '\0'){
        ptr[i] = temp[i];
        i++;
    }
    free(temp);
    return (ptr);
}