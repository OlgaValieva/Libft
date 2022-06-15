# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: carys <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/19 13:00:55 by carys             #+#    #+#              #
#    Updated: 2021/11/08 16:17:43 by carys            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HEADER = libft.h

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c\
ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c\
ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c\
ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c\
ft_calloc.c ft_strdup.c\
ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c\
ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

SRCS_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c\
			 ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJ	= ${SRCS:%.c=%.o}

OBJ_BONUS =  ${SRCS_BONUS:%.c=%.o}

CC	= gcc

RM	= rm -f

CFLAGS = -Wall -Wextra -Werror -I.

.PHONY : all clean fclean re bonus

all:	${NAME}

${NAME}:	${OBJ} ${HEADER} 
	ar rcs ${NAME} ${OBJ} $?

%.o:	%.c Makefile
	${CC} ${CFLAGC} -c $< -o $@ 

bonus:	
	@make OBJ="${OBJ_BONUS}" all

clean: 
	${RM} ${OBJ} ${OBJ_BONUS}

fclean: clean
	${RM} ${NAME}

re: fclean all
