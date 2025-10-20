# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbaltaza <dbaltaza@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/20 12:39:56 by dbaltaza          #+#    #+#              #
#    Updated: 2025/10/20 18:56:52 by dbaltaza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -Wall -Wextra -Werror
SRC = ft_memchr.c ft_memcmp.c ft_strncmp.c  ft_strnstr.c \
	  	ft_strdup.c ft_calloc.c ft_substr.c

#SRC_B = 	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
				ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
				ft_lstclear.c ft_lstiter.c ft_lstmap.c

.PHONY: all compile

all: $(NAME)

$(NAME): 
	cc -c $(FLAGS) $(SRC)
	ar rs $(NAME) *.o

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all