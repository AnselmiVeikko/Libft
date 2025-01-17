# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahentton <ahentton@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/19 12:42:55 by ahentton          #+#    #+#              #
#    Updated: 2024/05/06 13:59:49 by ahentton         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror ${HEADERS} -fPIC
CRLIB = ar rcs

SRCS = ./src/ft_atoi.c \
       ./src/ft_itoa.c \
       ./src/ft_bzero.c \
       ./src/ft_uitoa.c \
       ./src/ft_split.c \
       ./src/ft_calloc.c \
       ./src/ft_lstmap.c \
       ./src/ft_lstnew.c \
       ./src/ft_memchr.c \
       ./src/ft_memcmp.c \
       ./src/ft_memcpy.c \
       ./src/ft_memset.c \
       ./src/ft_printf.c \
       ./src/ft_strchr.c \
       ./src/ft_strdup.c \
       ./src/ft_strlen.c \
       ./src/ft_substr.c \
       ./src/ft_isalnum.c \
       ./src/ft_isalpha.c \
       ./src/ft_isascii.c \
       ./src/ft_isdigit.c \
       ./src/ft_isprint.c \
       ./src/ft_lstiter.c \
       ./src/get_next_line_utils.c \
       ./src/ft_lstadd_front.c \
       ./src/ft_lstadd_back.c \
       ./src/ft_putendl_fd.c \
       ./src/get_next_line.c \
       ./src/ft_putchar_fd.c \
       ./src/ft_putstr_fd.c \
       ./src/ft_putnbr_fd.c \
       ./src/ft_print_fts.c \
       ./src/ft_lstdelone.c \
       ./src/ft_printptr.c \
       ./src/ft_striteri.c \
       ./src/ft_printhex.c \
       ./src/ft_lstclear.c \
       ./src/ft_toupper.c \
       ./src/ft_tolower.c \
       ./src/ft_strtrim.c \
       ./src/ft_strrchr.c \
       ./src/ft_strnstr.c \
       ./src/ft_strncmp.c \
       ./src/ft_strmapi.c \
       ./src/ft_strlcpy.c \
       ./src/ft_strlcat.c \
       ./src/ft_strjoin.c \
       ./src/ft_memmove.c \
       ./src/ft_lstsize.c \
       ./src/ft_lstlast.c \

OBJS	:= ${SRCS:.c=.o}
HEADERS	:= -I ./include

GREEN := \033[0;32m
NC := \033[0m


all: ${NAME}

%.o: %.c
	@$(CC) $(CFLAGS) -c -o $@ $<

${NAME} : ${OBJS}
	@printf "${GREEN}[LIBFT]Compiling...${NC}\n"
	@${CRLIB} ${NAME} ${OBJS}
	@printf "${GREEN}[LIBFT]Compiled Succesfully!${NC}\n"

clean:
	@rm -f ${OBJS}
	@printf "${GREEN}[LIBFT]Clean Completed.${NC}\n"

fclean: clean
	@rm -f ${NAME} ${OBJS}
	@printf "${GREEN}[LIBFT]Full Clean Completed.${NC}\n"

re: fclean all

.PHONY: all clean fclean re
