# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cllopez- <cllopez-@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/22 11:55:04 by cllopez-          #+#    #+#              #
#    Updated: 2025/01/22 12:37:55 by cllopez-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libftprintf.a

AR          = ar rcs
CC          = cc
CFLAGS      = -Wall -Werror -Wextra
RM          = rm -rf

INCLUDE     = includes
SRC_DIR		= .
LIBFT_SRC   = $(SRC_DIR)/libft
UTILS_SRC  = $(SRC_DIR)/utils
OBJ_DIR     = obj

SRC_FILES   = $(wildcard $(LIBFT_SRC)/*.c) $(wildcard $(UTILS_SRC)/*.c)
OBJ_FILES   = $(patsubst $(SRC_DIR)/%, $(OBJ_DIR)/%, $(SRC_FILES:.c=.o))


RED         = \033[1;31m
GREEN       = \033[1;32m
BLUE        = \033[1;34m
YELLOW      = \033[1;33m
RESET       = \033[0m

all: ascii $(NAME)

$(NAME): $(OBJ_FILES)
	@echo "$(YELLOW)Compilacion $(NAME)...$(RESET)"
	@$(AR) $(NAME) $(OBJ_FILES)
	@echo "$(GREEN)$(NAME) creada con exito!$(RESET)"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	@echo "$(BLUE)Compilation de $<...$(RESET)"
	@$(CC) $(CFLAGS) -I$(INCLUDE) -c $< -o $@

clean:
	@echo "$(RED)Supresion de archivos ...$(RESET)"
	@$(RM) $(OBJ_DIR)

fclean: clean
	@echo "$(RED)Supresion de $(NAME)...$(RESET)"
	@$(RM) $(NAME)

re: fclean all



ascii:
	@clear
	@printf "$(GREEN)"
	@echo "  _ _ _      __ _"
	@echo " | (_) |__  / _| |_"
	@echo " | | | '_ \| |_| __|"
	@echo " | | | |_) |  _| |_"
	@echo " |_|_|_.__/|_|  \__|"
	@echo "$(RED)by: CLAUDIKI"
	@echo "$(RESET)\n"

	
.PHONY: all clean fclean re ascii 
