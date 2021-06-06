.PHONY	:	all clean fclean re

NAME	=	server

CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror

RM		=	rm -f

SRC		=	console.c functions.c handler.c main.c

OBJ		=	console.o functions.o handler.o main.o

all		:	$(NAME)

$(NAME)	:	$(SRC) server.h
	$(CC) $(CFLAGS) -c $(SRC)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean	:
	$(RM) $(OBJ)

fclean	:	clean
	$(RM) $(NAME)

re		:	fclean all
