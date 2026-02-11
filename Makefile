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
CC	= cc
CFLAGS	= -Wall -Wextra -Werror
RM	= rm -f
SRCS	= push_swap.c \
		input.c \
		list_utils.c \
		list_utils2.c \
		list_utils3.c \
		movements1.c \
		movements2.c \
		movements3.c\
		quick_sort_array.c \
		solve.c \
		split.c \
		small_cases.c \
		utils.c \
		utils2.c

OBJS	= $(SRCS:.c=.o)
INC	= header.h

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "✅ push_swap compilado correctamente!"

%.o: %.c $(INC) Makefile
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)
	@echo "🧹 Objetos eliminados"

fclean: clean
	$(RM) $(NAME)
	@echo "🗑️ Ejecutable eliminado"

re: fclean all

.PHONY: all clean fclean re
