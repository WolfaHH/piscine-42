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

NAME = libft.a

HEADER = ./includes/
SRCS = srcs/ft_putchar.c\
		srcs/ft_swap.c\
		srcs/ft_putstr.c\
		srcs/ft_strlen.c\
		srcs/ft_strcmp.c

OBJS = $(SRCS:.c=.o)

$(NAME) : $(OBJS)
				ar rc $(NAME) $(OBJS)
				ranlib $(NAME)

.c.o:
	gcc -Wall -Wextra -Werror -I $(HEADER) -c $< -o ${<:.c=.o}

all: $(NAME)

clean :
	rm -f $(OBJS)

fclean : clean
			rm -f $(OBJS)
re : fclean all

.PHONY: all clean re fclean