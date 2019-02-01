/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2018
** File description:
** my.h
*/

#ifndef MY_H_
# define MY_H_

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct rules
{
    int lines_n;
    int match_n;
} game_t;

typedef struct player_turn
{
    int line;
    int match;
} player_t;

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

//debug.c
int debug(int ac, char **av);

//square.c
void put_sticks_in_array(char **square, int *sticks, int dimensions);
void print_square(char **square, int dimensions);
char **generate_double_square(int dimensions);
int *determinate_number_sticks(int dimensions);

//player.c
int lines_check(int lines, int pos);
int match_check(int matches, int number, int *tab_matches, int pos);
player_t player_turn(game_t rules, int *matches_tab);

//ai.c
void calculate_move(int *sticks_pos, game_t rules);
int check_lines(int *sticks_pos, game_t rules);

//game.c
int count_matches(int size, int *stick);
int my_scanner(void);
int check_victory(int param, int *nb_sticks, int size);
void refresh(char **tab_array, int *nb_sticks, int dimensions);
int game(char **tab_array, int *nb_sticks, int dimensions, game_t rules);

#endif /* MY_H_ */