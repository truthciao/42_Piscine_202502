# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yshi <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/09 12:23:41 by yshi              #+#    #+#              #
#    Updated: 2025/03/09 12:24:51 by yshi             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
cc -Wall -Wextra -Werror -c *.c
ar crs libft.a *.o
