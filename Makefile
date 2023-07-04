# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mvalerio <mvalerio@student.42lisboa.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/13 13:46:45 by mvalerio          #+#    #+#              #
#    Updated: 2023/07/04 19:49:30 by mvalerio         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a

SRC = algorithm.c data.c data2.c lists.c protections.c push_swap.c \
      reverse_rotate.c rotate.c swap_and_push.c tests.c utils.c utils2.c

CFLAGS := -Wall -Wextra -Werror

CC = cc -c $(CFLAGS)

all: $(NAME)

$(NAME):
	make -C Libft
	make bonus -C Libft
	@cp Libft/libft.a $(NAME)
	$(CC) $(SRC)
	ar rcs $(NAME) $(SRC:.c=.o) Libft/libft.a

clean:
	rm -f $(SRC:.c=.o) $(BONUS:.c=.o)
	make clean -C Libft

fclean: clean
	rm -f $(NAME)
	make fclean -C Libft

re: fclean all
