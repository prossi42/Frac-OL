# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: prossi <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/25 12:07:08 by prossi            #+#    #+#              #
#    Updated: 2017/09/07 13:56:44 by prossi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all, clean, fclean, re

NAME = fractol

SRC_PATH = src

SRC_NAME = main.c ft_init_struct.c ft_affich.c ft_mandel.c ft_mlx.c \
			ft_tabcolor.c ft_tabcolor_sd.c ft_tabcolor_td.c ft_tricorn.c \
			ft_color.c ft_julia.c multiscreen.c ft_mandel_multi.c \
			ft_color_multi.c ft_tricorn_multi.c ft_julia_multi.c \
			ft_init_struct_multi.c key_hook_multi.c

# OBJ_PATH = $(SRC_PATH)

LDFLAGS = -Llibft
LDLIBS = libft/my_libft.a

CC = gcc
CFLAGS = -lmlx -framework OpenGL -framework Appkit

# OBJ_NAME = $(SRC_NAME:.c=.o)

SRC = $(addprefix $(SRC_PATH)/,$(SRC_NAME))
# OBJ = $(addprefix $(OBJ_PATH)/,$(OBJ_NAME))

all: $(NAME)

$(NAME): $(SRC)
	cd libft/ ; make re; make clean ; cd ..
	$(CC) $(LDFLAGS) $(LDLIBS) -o $@ $^ $(CFLAGS)

clean:
	rm -fv $(OBJ)
	@rmdir $(OBJ_PATH) 2> /dev/null || true

fclean: clean
	cd libft/ ; make fclean ; cd .. ; rm -fv $(NAME)

re: fclean all
