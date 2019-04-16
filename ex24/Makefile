# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zamazzal <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/04 13:30:05 by zamazzal          #+#    #+#              #
#    Updated: 2018/10/04 13:56:47 by zamazzal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = "libft.a"

FILES = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

HEAD = includes/

all : $(NAME)

$(NAME) :
	gcc -I=./$(HEAD) -c $(FILES)
	ar rc $(NAME) $(OBJ)

clean :
	/bin/rm -f  $(OBJ)

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all
