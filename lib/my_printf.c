/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** lib
*/

#include "my.h"

void put_percentage_helper(char parameter, va_list arg)
{
    switch (parameter){
    case 'b':
        my_put_nbr_base(va_arg(arg, int), "01");
        break;
    case 'x':
        my_put_nbr_base(va_arg(arg, int), "0123456789abcdef");
        break;
    case 'X':
        my_put_nbr_base(va_arg(arg, int), "0123456789ABCDEF");
        break;
    case 'o':
        my_put_nbr_base(va_arg(arg, int), "01234567");
        break;
    default:
        my_putchar(parameter);
        break;
    }
}

void put_percentage(char parameter, va_list arg)
{
    switch (parameter){
    case 'd':
        my_put_nbr(va_arg(arg, int));
        break;
    case 'c':
        my_putchar(va_arg(arg, int));
        break;
    case '%':
        my_putchar('%');
        break;
    case 'i':
        my_put_nbr(va_arg(arg, int));
        break;
    case 's':
        my_putstr(va_arg(arg, char*));
        break;
    default:
        put_percentage_helper(parameter, arg);
        break;
    }
}

int percentage_finder(char *str)
{
    int n = 0;
    int i = 0;

    while (str[i] != '\0'){
        if (str[i] == '%' && str[i+1] == '%'){
            n++;
            i++;
        }
        else if (str[i] == '%')
            n++;
        i++;
    }
    return (n);
}

void my_printf(char *str, ...)
{
    int i = 0;
    int p = percentage_finder(str);
    va_list arg;

    va_start(arg, p);
    while (str[i] != '\0'){
        if (str[i] == '%'){
            put_percentage(str[i+1], arg);
            i += 2;
            p--;
        }
        else{
            my_putchar(str[i]);
            i++;
        }
    }
}