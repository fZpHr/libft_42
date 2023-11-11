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
	libft/ft_strlen.c \
	libft/ft_itoa.c\
	libft/ft_putchar_fd.c \
	libft/ft_putstr_fd.c \
	libft/ft_putnbr_fd.c
	

SRCSPERSO	=	libft/ft_countdigits.c \
		libft/ft_countdigits_base.c \
		libft/ft_putnbr_fd_unsigned.c \
		libft/ft_putnbr_fd_base.c \
		libft/ft_putnbr_fd_base_unsigned.c \
		libft/ft_countdigits_unsigned.c \

OBJTS	=	${SRCS:.c=.o} ${SRCSPERSO:.c=.o} 


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
