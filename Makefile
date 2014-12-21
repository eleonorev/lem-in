#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: evoisin <evoisin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/12/23 20:14:10 by evoisin           #+#    #+#              #
#    Updated: 2014/11/18 17:53:35 by evoisin          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = lem-in

SRC = main.c ft_error.c ft_cpytospace.c lem_in.c ft_fourmis.c

HEAD = lem_in.h

CFLAGS = -Wall -Werror -Wextra

FLAGSLIBFT = -L libft -lft -I libft/includes

$(NAME):
		@make -C libft/
		@gcc $(CFLAGS) -o $(NAME) $(SRC) $(HEAD) $(FLAGSLIBFT)
		@echo "\033[1;37;40mOk. \033[0m"

all : $(NAME)

clean : 
		@rm -f $(OSRC)

fclean : clean
		@make -C libft/ fclean
		@rm -rf $(NAME)

re : fclean all 
