# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmtimkul <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/06/29 23:05:57 by nmtimkul          #+#    #+#              #
#    Updated: 2017/07/02 11:38:33 by nmtimkul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf

FILES = build_struct.c draw.c draw_line.c error.c \
		keyhook.c main.c movemap.c point.c \
		point_rotation.c read_file.c \

OBJECTS = $(FILES:.c=.o)

CFLAG = -Wall -Werror -Wextra

ATTACH = -L libft/ -lft -lmlx -framework OpenGL -framework AppKit

all: $(NAME)

quick: clean $(NAME)
	@echo "Made Quickly"

lib:
	@make -C libft/ fclean
	@make -C libft/

$(NAME): lib
	@gcc $(CFLAG) -I libft/ -c $(FILES)
	@gcc $(CFLAG) -o $(NAME) $(OBJECTS) $(ATTACH)

clean:
	@/bin/rm -f $(OBJECTS)
	@make -C libft/ clean

fclean: clean
	@/bin/rm -f $(NAME)
	@make -C libft/ fclean

re: fclean all
