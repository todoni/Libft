# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sohan <sohan@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/14 20:31:44 by sohan             #+#    #+#              #
#    Updated: 2021/05/10 17:27:16 by sohan            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -c -Wall -Wextra -Werror
TARGET = libft.a
SOURCES = ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_islower.c ft_isupper.c ft_isprint.c ft_tolower.c ft_toupper.c ft_strncmp.c ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strlcpy.c ft_strlcat.c ft_strlen.c ft_isspace.c ft_strdup.c ft_memset.c ft_bzero.c ft_calloc.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_memccpy.c ft_strjoin.c ft_split.c ft_substr.c ft_strtrim.c ft_itoa.c

OBJECTS = ${SOURCES:.c=.o}

all: ${TARGET}

${TARGET}: ${OBJECTS}
	ar rc $@ ${OBJECTS}

%.o: %.c
	${CC} ${CFLAGS} $< -o $@

clean:
	rm -rf ${OBJECTS}

fclean: clean
	rm -rf ${TARGET}

re: fclean all
