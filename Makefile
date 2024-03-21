# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/01 08:44:18 by ansulist          #+#    #+#              #
#    Updated: 2023/01/30 10:38:26 by ansulist         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SOURCES = \
			ft_print_base.c \
			ft_printf.c \
			ft_print_utils.c \
			ft_print_str.c \
			ft_print_number.c \
			ft_print_char.c \
			ft_print_un_dec.c \

all: $(NAME)			

OBJS = $(SOURCES:.c=.o)

CFLAGS = -Wall -Wextra -Werror

CC = gcc

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -c $(SOURCES)
	ar -rcs $(NAME) $(OBJS)

clean:
	rm -f $(wildcard *.o)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:
	all clean fclean re