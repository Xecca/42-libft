# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aponomar <aponomar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/29 16:29:37 by aponomar          #+#    #+#              #
#    Updated: 2019/05/22 14:19:12 by aponomar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

SRC=ft_atoi.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_strcmp.c ft_strcpy.c \
		ft_strdup.c ft_strlen.c ft_strncmp.c ft_strncpy.c ft_strstr.c ft_tolower.c \
		ft_toupper.c ft_isprint.c ft_isascii.c ft_bzero.c ft_memset.c ft_isalnum.c \
		ft_isdigit.c ft_isalpha.c ft_memcpy.c ft_memcmp.c ft_memccpy.c ft_memmove.c \
		ft_memchr.c ft_strcat.c ft_strncat.c ft_strchr.c ft_strlcat.c ft_strrchr.c \
		ft_strnstr.c ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c \
		ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c ft_strnequ.c \
		ft_strsub.c ft_strjoin.c ft_strtrim.c ft_trimlen.c ft_malloclen.c ft_wdcount.c \
		ft_strsplit.c ft_chcount.c ft_sfill.c ft_itoa.c ft_putendl.c ft_putchar_fd.c \
		ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_lstnew.c ft_strldup.c \
		ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter.c ft_lstmap.c
OBJECTS=ft_atoi.o ft_putchar.o ft_putnbr.o ft_putstr.o ft_strcmp.o ft_strcpy.o \
			ft_strdup.o ft_strlen.o ft_strncmp.o ft_strncpy.o ft_strstr.o ft_tolower.o \
			ft_toupper.o ft_isprint.o ft_isascii.o ft_bzero.o ft_memset.o ft_isalnum.o \
			ft_isdigit.o ft_isalpha.o ft_memcpy.o ft_memcmp.o ft_memccpy.o ft_memmove.o \
			ft_memchr.o ft_strcat.o ft_strncat.o ft_strchr.o ft_strlcat.o ft_strrchr.o \
			ft_strnstr.o ft_memalloc.o ft_memdel.o ft_strnew.o ft_strdel.o ft_strclr.o \
			ft_striter.o ft_striteri.o ft_strmap.o ft_strmapi.o ft_strequ.o ft_strnequ.o \
			ft_strsub.o ft_strjoin.o ft_strtrim.o ft_trimlen.o ft_malloclen.o ft_wdcount.o \
			ft_strsplit.o ft_chcount.o ft_sfill.o ft_itoa.o ft_putendl.o ft_putchar_fd.o \
			ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd.o ft_lstnew.o ft_strldup.o \
			ft_lstdelone.o ft_lstdel.o ft_lstadd.o ft_lstiter.o ft_lstmap.o
INCLUDES=./

FLAGS=-Wall -Wextra -Werror

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
