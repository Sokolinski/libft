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

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
HEADER = libft.h

SRC = \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isdigit.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_strlen.c  \
	ft_tolower.c \
	ft_toupper.c \
	ft_strlcpy.c \
	ft_bzero.c   \
	ft_memcpy.c  \
	ft_memmove.c \
	ft_strlcat.c \
	ft_strchr.c  \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_memcmp.c  \
	ft_strnstr.c \
	ft_atoi.c    \
	ft_calloc.c  \
	ft_strdup.c  \
	ft_substr.c  \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_split.c   \
	ft_memset.c  \
	ft_memchr.c  \
	ft_itoa.c    \
	ft_strmapi.c \
	ft_striteri.c \
	ft_putstr_fd.c \
	ft_putchar_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c

SRCBS = \
	ft_lstadd_front.c \
	ft_lstnew.c \
	ft_lstsize.c \
	ft_lstlast.c \
	ft_lstadd_back.c \
	ft_lstdelone.c \
	ft_lstclear.c \
	ft_lstiter.c \
	ft_lstmap.c

OBJ = $(SRC:.c=.o)
OBJBS = $(SRCBS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(OBJ) $(OBJBS)
	ar rcs $(NAME) $(OBJ) $(OBJBS)

clean:
	rm -f $(OBJ) $(OBJBS)

fclean: clean
	rm -f $(NAME)

re: fclean all


