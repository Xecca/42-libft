# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aponomar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/29 16:29:37 by aponomar          #+#    #+#              #
#    Updated: 2019/04/29 22:03:12 by aponomar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft

SRC = main.c \
	  ft_putchar.c \

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc -o $(NAME) $(SRC) $(FLAGS)

norm:
	norminette -R CheckForbiddenSourceHeader

clean:
	rm -rf *.o $(NAME).dSYM

fclean: clean
	rm -rf $(NAME)

re: fclean all

