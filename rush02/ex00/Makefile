# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ngodard <marvin@42lausanne.ch>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/17 17:09:14 by ngodard           #+#    #+#              #
#    Updated: 2022/09/17 17:09:19 by ngodard          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02
SRC = main.c ft_split.c ft_strcat.c lib.c lib2.c rush02.c

all: $(NAME)

$(NAME):
		gcc -Werror -Wextra -Wall -o $(NAME) $(SRC)

fclean:
	rm -f $(NAME)

re: fclean all

