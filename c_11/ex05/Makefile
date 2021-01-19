# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: calle <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/22 14:39:03 by calle             #+#    #+#              #
#    Updated: 2020/07/22 15:40:39 by calle            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op 
SRCS = srcs/do_op.c srcs/ft_operations.c srcs/utilities.c
INCS = includes
CC = gcc 
FLAGS = -Wall -Wextra -Werror
OBJS =  $(SRCS:c=o)

all : $(NAME)

%.o: %.c
	$(CC) $(FLAGS) -I $(INCS) -c $< -o $(<:c=o)

$(NAME) : $(OBJS)
		$(CC) $(FLAGS) -I $(INCS) -o $(NAME) $(OBJS)

clean: 
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
