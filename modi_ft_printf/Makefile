# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ainoue <ainoue.@student.42tokyo.f>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/02 02:15:12 by ainoue            #+#    #+#              #
#    Updated: 2021/10/25 20:39:24 by ainoue           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC			= ft_printf.c

SRCPRINTF	= con_flags.c con_junction.c con_c.c con_di.c con_p.c con_s.c con_u.c con_x.c write_per.c keep_dest.c change_16base.c


INCLUDE		= libft.h 

PRINTF		= $(addprefix ./printf_parts/,$(SRCPRINTF))

LIBFT_D		= ./libft/

SRCS		= ${SRC} ${PRINTF}

HEAD		= ./includes/

INCFLAG		= $(addprefix -I,$(HEAD))

OBJS		= ${SRCS:.c=.o}

NAME		= libftprintf.a

LIBFT_A		= $(LIBFT_D)libft.a

CC			= gcc
RM			= rm -f
AR			= ar rs

CFLAGS		= -Wall -Wextra -Werror ${INCFLAG}

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME):	${OBJS} $(LIBFT_A)
			cp $(LIBFT_A) $(NAME)
			${AR} ${NAME} ${OBJS}


all:		$(NAME)

clean:		
			$(MAKE) clean -C $(LIBFT_D)
			${RM} ${OBJS}

fclean:		clean
			$(MAKE) fclean -C $(LIBFT_D)
			${RM} $(NAME)

re:			fclean all

.PHONY:		all clean fclean re

$(LIBFT_A):	$(LIBFT_D)
			$(MAKE) -C $(LIBFT_D)
