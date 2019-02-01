/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** lib
*/

#include <unistd.h>
#include <stdarg.h>

#ifndef MY_H_
# define MY_H_

//functions
void my_putchar(char c);
void my_isneg(int n);
int my_compute_square_root(int nb);
int my_compute_power_rec(int nb, int power);
void my_swap(int *a, int *b);
int my_find_prime_sup(int nb);
int my_getnbr(char const *str);
int my_is_prime(int nb);
void my_put_nbr(int nb);
void my_put_nbr_base(int nb, char const *base);
void my_put_nbr(int nb);
void my_putstr(char const *str);
char *my_revstr(char *str);
void my_sort_int_array(int *tab, int size);
char *my_strcpy(char *dest, char const *src);
int my_strlen(char const *str);
char *my_strcpy(char *dest, char const *src);
char *my_strstr(char *str, char const *to_find);
char *my_realloc_char(char *ptr, int size);
int my_strcmp(char *s1, char *s2);
int count_spaces(char *str);
int get_word_size(char *str, int pos);
char *get_next_word(char *str, int pos);
char **my_str_to_word_array(char *str);


//printf
int percentage_finder(char *str);
void put_percentage(char parameter, va_list arg);
void put_percentage_helper(char parameter, va_list arg);
void my_printf(char *str, ...);

#endif /* MY_H_ */
