# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbelle <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/05 17:52:23 by hbelle            #+#    #+#              #
#    Updated: 2023/11/08 14:47:29 by hbelle           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

SRCS	=	libft/ft_atoi.c \
	libft/ft_bzero.c \
	libft/ft_isalnum.c \
	libft/ft_isalpha.c \
	libft/ft_isascii.c \
	libft/ft_isdigit.c \
	libft/ft_isprint.c \
	libft/ft_memchr.c \
	libft/ft_memcmp.c \
	libft/ft_memcpy.c \
	libft/ft_memmove.c \
	libft/ft_memset.c \
	libft/ft_strchr.c \
	libft/ft_strdup.c \
	libft/ft_strlcat.c \
	libft/ft_strlcpy.c \
	libft/ft_strlen.c \
	libft/ft_strncmp.c \
	libft/ft_strnstr.c \
	libft/ft_strrchr.c \
	libft/ft_tolower.c \
	libft/ft_toupper.c \
	libft/ft_calloc.c \
	libft/ft_strjoin.c \
	libft/ft_substr.c \
	libft/ft_strtrim.c \
	libft/ft_split.c\
	libft/ft_itoa.c\
	libft/ft_strmapi.c \
	libft/ft_striteri.c \
	libft/ft_putchar_fd.c \
	libft/ft_putstr_fd.c \
	libft/ft_putendl_fd.c \
	libft/ft_putnbr_fd.c
	
SRCSBONUS	=	libft/ft_lstnew.c \
		libft/ft_lstadd_front.c \
		libft/ft_lstsize.c \
		libft/ft_lstlast.c \
		libft/ft_lstadd_back.c \
		libft/ft_lstdelone.c \
		libft/ft_lstclear.c \
		libft/ft_lstiter.c \
		libft/ft_lstmap.c

SRCSPERSO	=	libft/ft_countdigits.c \
		libft/ft_countdigits_base.c \
		libft/ft_putnbr_fd_base.c \

OBJTS	=	${SRCS:.c=.o} ${SRCSBONUS:.c=.o} ${SRCSPERSO:.c=.o} 


CC	=	cc
RM	=	rm -f

CFLAGS = -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -I libft -c $< -o ${<:.c=.o}

$(NAME): ${OBJTS}
		ar rcs ${NAME} ${OBJTS}

all:	${NAME}

clean:
	${RM} ${OBJTS}

fclean:	clean
	${RM} ${NAME}

re:	fclean all

.PHONY: all bonus clean fclean re
