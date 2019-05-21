# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aponomar <aponomar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/29 16:29:37 by aponomar          #+#    #+#              #
#    Updated: 2019/05/20 21:55:14 by aponomar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_memset.c \
		ft_putchar.c ft_putstr.c ft_strcpy.c ft_strdup.c ft_strlen.c \
		ft_strncpy.c

OBJECTS = *.o

INCLUDES = ./

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc -c -I$(INCLUDES) $(FLAGS) $(SRC)
	ar -rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

norm:
	norminette -R CheckForbiddenSourceHeader

clean:
	/bin/rm -rf *.o

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all
