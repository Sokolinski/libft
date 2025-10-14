# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msakalin <msakalin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/05 19:09:55 by msakalin          #+#    #+#              #
#    Updated: 2025/10/14 17:11:14 by msakalin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = $(wildcard ft_*.c)
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

breaker:
ifeq ($(shell uname), Darwin)
	$(CC) -dynamiclib $(CFLAGS) -o libft.so $(SRC) $(SRCBONUS) -L../obj -lmalloc
else
	$(CC) -nostartfiles -shared -fPIC -ldl $(CFLAGS) -o libft.so $(SRC) $(SRCBONUS)
endif

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) libft.so

fclean: clean
	rm -f $(NAME)

re: fclean all
