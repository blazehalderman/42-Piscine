#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bhalderm <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/13 16:14:30 by bhalderm          #+#    #+#              #
#    Updated: 2017/07/13 18:21:26 by bhalderm         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = cat

SRC = cat.c

HEAD = ft_cat.h

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SRC) -o $(NAME) -I $(HEAD)

clean:
	@rm -f $(NAME).o

fclean: clean
	@rm -rf $(NAME)

re: fclean all