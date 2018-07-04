##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## makefile
##

INCLUDE		=	-Iinclude

CFLAGS          +=      $(INCLUDE) -W -Wall -Wextra -Wshadow

CC		=	gcc

SRC_BASE	=	src/

SRC_FILES	=	main.c				\
			error/errors.c			\
			my_str_to_word_array.c		\
			get_next_line.c			\
			my_strlen.c			\
			parsing/info/parsing_info.c	\
			algo/algo.c			\
			algo/move.c			\
			algo/wall.c			\
			parsing/parsing.c		\
			parsing/end/verif_good.c

SRC		=	$(addprefix $(SRC_BASE),$(SRC_FILES))

OBJ		=	$(SRC:.c=.o)

NAME		=	ai

.SILENT:

$(NAME):	$(OBJ)
	$(CC)  -o $(NAME) $(OBJ)
		@echo "Compilation faite!"

all:	$(NAME)

clean:
	rm -f $(OBJ)
		@echo "Clean faite!"

fclean: clean
	rm -f $(NAME)
		@echo "FClean faite!"

re:	fclean all
		@echo "Re fait!"

tests_run:
	make -C tests/

.PHONY: clean fclean re all tests_run
