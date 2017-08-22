#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bhalderm <bhalderm@student.42.us.org>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/16 20:53:57 by bhalderm          #+#    #+#              #
#    Updated: 2017/07/16 21:47:10 by bhalderm         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

SRCS= ft_helper.c eval_expr.c

HEADER= ft_header.h

FLAGS= -Wall -Wextra -Werror

NAME= eval_expr

OBJ= ft_helper.o eval_expr.o

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRCS) -I $(HEADER)
	gcc $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
re: fclean all
