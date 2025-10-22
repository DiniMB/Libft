# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbaltaza <dbaltaza@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/16 19:09:05 by dbaltaza          #+#    #+#              #
#    Updated: 2025/10/22 19:21:30 by dbaltaza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 			= libft.a
CC 				= gcc
CFLAGS 			= -Wall -Wextra -Werror
RM 				= rm -f

SRCS			=	ft_isalnum.c ft_isprint.c ft_memcmp.c ft_putchar_fd.c ft_split.c\
					ft_strlcat.c ft_strncmp.c ft_substr.c ft_atoi.c ft_isalpha.c \
					ft_itoa.c ft_memcpy.c ft_putendl_fd.c ft_strchr.c ft_strlcpy.c \
					ft_strnstr.c ft_tolower.c ft_bzero.c ft_isascii.c \
					ft_memmove.c ft_putnbr_fd.c ft_strdup.c ft_strlen.c ft_strrchr.c \
					ft_toupper.c ft_calloc.c ft_isdigit.c ft_memchr.c ft_memset.c \
					ft_putstr_fd.c ft_strjoin.c ft_strmapi.c ft_strtrim.c ft_striteri.c

OBJS 			= $(SRCS:.c=.o)

BONUS			=	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
					ft_lstdelone.c ft_lstiter.c ft_lstlast.c \
					ft_lstmap.c ft_lstnew.c ft_lstsize.c

BONUS_OBJS		= $(BONUS:.c=.o)

all: $(NAME)

%.o: %.c 		libft.h
					$(CC) $(CFLAGS) -c $< -o $@



$(NAME): 		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean: 		clean
				$(RM) $(NAME)

re:				fclean all

bonus:			$(OBJS) $(BONUS_OBJS)
				ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY:			all clean fclean re bonus