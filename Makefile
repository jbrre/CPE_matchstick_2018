##
## EPITECH PROJECT, 2019
## CPE_matchstick_2018
## File description:
## Makefile
##

NAME	= matchstick

CC	= gcc -g3

RM	= rm -f

SRCS	= ./lib/my_compute_power_rec.c \
	  ./lib/my_compute_square_root.c \
	  ./lib/my_find_prime_sup.c \
	  ./lib/my_getnbr.c \
	  ./lib/my_is_prime.c \
	  ./lib/my_isneg.c \
	  ./lib/my_put_nbr.c \
	  ./lib/my_put_nbr_base.c \
	  ./lib/my_putchar.c \
	  ./lib/my_putstr.c \
	  ./lib/my_revstr.c \
	  ./lib/my_sort_int_array.c \
	  ./lib/my_strcpy.c \
	  ./lib/my_strlen.c \
	  ./lib/my_swap.c \
	  ./lib/my_strcmp.c \
	  ./lib/my_strlowcase.c \
	  ./lib/my_str_to_word_array.c \
	  ./lib/my_printf.c \
	  ./lib/my_realloc_char.c \
	  ./srcs/debug.c \
	  ./srcs/square.c \
	  ./srcs/main.c \
	  ./srcs/player.c \
	  ./srcs/ai.c \
	  ./srcs/game.c 

OBJS	= $(SRCS:.c=.o)

CFLAGS = -I ./include/
CFLAGS += -Wall -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) $(OBJS) -o $(NAME) $(LDFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
