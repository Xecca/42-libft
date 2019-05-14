# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aponomar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/29 16:29:37 by aponomar          #+#    #+#              #
#    Updated: 2019/05/14 15:09:14 by aponomar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = *.c

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
