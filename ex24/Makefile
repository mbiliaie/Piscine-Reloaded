#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbiliaie <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/30 19:08:33 by mbiliaie          #+#    #+#              #
#    Updated: 2017/10/30 19:08:37 by mbiliaie         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

SRCS = ./srcs/*.c


HEADER = ./includes/ft.h

OUT = *.o
СFLAGS = -c -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
		gcc $(СFLAGS) $(SRCS)
		ar rc $(NAME) $(HEADER) $(OUT)

clean:
		rm -f $(OUT)
fclean:
		rm -f $(NAME)

re: fclean all