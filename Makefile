# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wwan-ab- <wwan-ab-@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/27 10:42:51 by wwan-ab-          #+#    #+#              #
#    Updated: 2024/07/27 10:42:56 by wwan-ab-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc 

CFLAGS = -Wall -Wextra -Werror -I.

REMOVE = rm -rf

SOURCES = ft_printf.c /
			

LIBFT = ./Libft/

LIBFT_A = ./Libft/libft.a

OBJECTS = $(SRCS:.c=.o)

NAME = libftprintf.a

LIBC = ar rcs

%o: %.c
	$(CC) -c $(CFLAGS) -o $@ $<

$(NAME): $(OBJECTS)
	make -C (LIBFT)
	cp $(LIBFT_A) $(NAME)
	LIBC $(NAME) $(OBJECTS)

all: $(NAME)

clean:
	make clean -C $(LIBFT)
	$(REMOVE) $(OBJECTS)

fclean:
	$(REMOVE) $(NAME) $(LIBFT_A)

re: fclean all

.PHONY: all clean fclean re
