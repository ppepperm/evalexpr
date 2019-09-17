# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ppepperm <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/17 14:21:04 by ppepperm          #+#    #+#              #
#    Updated: 2019/08/18 18:38:49 by ppepperm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= eval_expr

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -o $(NAME)  srcs/*.c -I headers

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)
