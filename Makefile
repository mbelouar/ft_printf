# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbelouar <mbelouar@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/16 18:24:24 by mbelouar          #+#    #+#              #
#    Updated: 2022/10/21 19:22:32 by mbelouar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_printf.c ft_putnbr.c ft_putchar.c ft_putstr.c ft_putnbr_u.c ft_hex.c
OBJS	= ${SRCS:.c=.o}
NAME	= libftprintf.a
AR		= ar -r
CC		= gcc
CFLAGS = -Wall -Werror -Wextra
RM 		= rm -f

all:	${NAME}

${NAME}:	${OBJS}
			${AR} ${NAME} ${OBJS}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all

.PHONY:		all clean fclean re
