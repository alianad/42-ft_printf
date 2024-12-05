# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anadhira <anadhira@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/25 12:26:35 by anadhira          #+#    #+#              #
#    Updated: 2024/11/25 12:32:17 by anadhira         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SOURCES = \
			ft_printf.c \
			ft_words.c \
			ft_numbers.c

OBJECTS = $(SOURCES:.c=.o)

CC = cc

CMPFLAGS = -Wall -Wextra -Werror

%.o: %.c
	$(CC) $(CMPFLAGS) -c $< -o $@

$(NAME): $(OBJECTS)
	@ar -rcs $(NAME) $(OBJECTS)

all: $(NAME)

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
