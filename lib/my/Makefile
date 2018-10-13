##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

SRC = rush2.c

OBJ = $(SRC:.c=.o)

NAME = rush2

all: $(NAME)

$(NAME): $(OBJ)
	gcc $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
