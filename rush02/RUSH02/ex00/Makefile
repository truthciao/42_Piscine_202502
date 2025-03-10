# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yshi <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/09 17:17:41 by yshi              #+#    #+#              #
#    Updated: 2025/03/09 17:23:06 by yshi             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = rush-02

SOURCES = main.c \
		  numcheck.c \
		  hundred.c \
		  ft_strcmp.c \
		  ft_split.c
HEADERS = dictionary.h
CFLAGS = -Wall -Wextra -Werror

$(NAME): $(SOURCES) $(HEADERS)
	cc $(CFLAGS) $(SOURCES) -o $(NAME)

fclean:
	rm -f $(NAME)
