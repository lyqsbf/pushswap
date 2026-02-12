# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yaqliu <yaqliu@student.42barcelona.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/08 23:45:00 by yaqliu            #+#    #+#              #
#    Updated: 2026/02/11 11:43:20 by yaqliu           ###   ########.fr        #
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
SRCS_BONUS = checker.c $(COMMON_SRCS)
OBJS	= $(SRCS:.c=.o)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)
INC	= header.h
INC_BONUS = checker_bonus.h

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "✅ push_swap compilado correctamente!"

bonus: $(OBJS_BONUS)
	$(CC) $(CFLAGS) $(OBJS_BONUS) -o $(NAME_BONUS)
	@echo "✅ checker compilado correctamente!"

%.o: %.c $(INC) $(INC_BONUS) Makefile
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS) $(OBJS_BONUS)
	@echo "🧹 Objetos eliminados"

fclean: clean
	$(RM) $(NAME) $(NAME_BONUS)
	@echo "🗑️ Ejecutable eliminado"

re: fclean all

.PHONY: all clean fclean re bonus
