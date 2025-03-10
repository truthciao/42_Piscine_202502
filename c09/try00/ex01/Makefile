# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yshi <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/09 12:27:01 by yshi              #+#    #+#              #
#    Updated: 2025/03/09 17:14:10 by yshi             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libft.a
SRC_DIR = srcs
INC_DIR = includes
SOURCES = $(SRC_DIR)/ft_putchar.c \
			 $(SRC_DIR)/ft_putstr.c \
			 $(SRC_DIR)/ft_swap.c \
			 $(SRC_DIR)/ft_strlen.c \
			 $(SRC_DIR)/ft_strcmp.c
HEADERS = $(INC_DIR)/ft.h

OBJECTS = $(SOURCES:.c=.o)

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)
 
$(NAME): $(OBJECTS)
		ar crs $(NAME) $(OBJECTS)

%.o: %.c $(HEADERS)
	 cc $(CFLAGS) -c $< -o $@
 
clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)
	
re: fclean all
