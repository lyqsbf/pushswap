# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yaqliu <yaqliu@student.42barcelona.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/08 23:45:00 by yaqliu            #+#    #+#              #
#    Updated: 2026/02/14 18:12:03 by yaqliu           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap
NAME_BONUS = checker
CC	= cc
CFLAGS	= -Wall -Wextra -Werror
RM	= rm -f

COMMON_SRCS = input.c \
		list_utils.c \
		list_utils2.c \
		list_utils3.c \
		stack_push.c \
		stack_rotate.c \
		stack_rrotate.c\
		stack_swap.c\
		quick_sort_array.c \
		solve.c \
		split.c \
		small_cases.c \
		utils.c \
		utils2.c

SRCS = push_swap.c $(COMMON_SRCS)
SRCS_BONUS = checker_bonus.c\
	gnl_bonus.c\
	gnl_utils_bonus.c\
	utils_bonus.c\
	utils2_bonus.c\
	movements1_bonus.c\
	movements2_bonus.c\
	$(COMMON_SRCS)

OBJS	= $(SRCS:.c=.o)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)
INC	= header.h
INC_BONUS = checker_bonus.h

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

bonus: $(NAME_BONUS)

$(NAME_BONUS): $(OBJS_BONUS)
	$(CC) $(CFLAGS) $(OBJS_BONUS) -o $(NAME_BONUS)

%.o: %.c $(INC) $(INC_BONUS) Makefile
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS) $(OBJS_BONUS)

fclean: clean
	$(RM) $(NAME) $(NAME_BONUS)

re: fclean all

.PHONY: all clean fclean re bonus
