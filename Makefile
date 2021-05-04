# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sohan <sohan@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/14 20:31:44 by sohan             #+#    #+#              #
#    Updated: 2021/05/04 21:49:31 by sohan            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -c -Wall -Wextra -Werror
TARGET = libft.a
INCDIR = includes
SOURCES = srcs/ft_atoi.c srcs/ft_isalnum.c srcs/ft_isalpha.c srcs/ft_isascii.c srcs/ft_isdigit.c srcs/ft_islower.c srcs/ft_isupper.c srcs/ft_isprint.c srcs/ft_tolower.c srcs/ft_toupper.c srcs/ft_strncmp.c srcs/ft_strchr.c srcs/ft_strrchr.c srcs/ft_strnstr.c srcs/ft_strlcpy.c srcs/ft_strlcat.c srcs/ft_strlen.c srcs/ft_isspace.c srcs/ft_strdup.c srcs/ft_memset.c srcs/ft_bzero.c srcs/ft_calloc.c srcs/ft_memcpy.c srcs/ft_memmove.c srcs/ft_memchr.c srcs/ft_memcmp.c srcs/ft_memccpy.c

OBJECTS = ${SOURCES:.c=.o}

all: ${TARGET}

${TARGET}: ${OBJECTS}
	ar rc $@ ${OBJECTS}

%.o: %.c
	${CC} ${CFLAGS} $< -o $@ -I ${INCDIR}

clean:
	rm -rf ${OBJECTS}

fclean: clean
	rm -rf ${TARGET}

re: fclean all
