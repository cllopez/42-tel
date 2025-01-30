# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cllopez- <cllopez-@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/22 11:55:04 by cllopez-          #+#    #+#              #
#    Updated: 2025/01/30 14:13:59 by cllopez-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libftprintf.a
LIBFT = libft.a
LIBFT_DIR = libft

MY_SOURCES =  ft_printf.c ft_strs.c ft_putnbr.c 

CC = cc # compiler
CCFLAGS = -Wall -Wextra -Werror # flags for warnings and errors
RM = rm -rf # command to remove files
AR = ar rcs

# Object files corresponding to the source files
OBJS = $(MY_SOURCES:.c=.o)

%.o : %.c
	$(CC) $(CCFLAGS) -c $< -o $@

all: $(NAME)

libft:
	@echo "Compilando libft..."
	$(MAKE) -C $(LIBFT_DIR)

# Build the static library
$(NAME): libft $(OBJS)
	@echo "Copiando libft.a en libftprintf.a..."
	cp $(LIBFT_DIR)/$(LIBFT) $(NAME)
	@echo "Agregando objetos de ft_printf a libftprintf.a..."
	$(AR) $(NAME) $(OBJS)

test: test.o $(NAME)
	$(CC) $(CCFLAGS) test.c $(NAME) $(LIBFT_DIR)/$(LIBFT) -o test

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	$(RM) $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

re:	fclean all # Clean and recompile everything

.PHONY: all clean fclean re libft