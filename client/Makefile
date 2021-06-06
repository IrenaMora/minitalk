.PHONY	:	all clean fclean re

NAME	=	client

CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror

RM		=	rm -f

SRC		=	console.c functions.c main.c send.c

OBJ		=	console.o functions.o main.o send.o

all		:	$(NAME)

$(NAME)	:	$(SRC) client.h
	$(CC) $(CFLAGS) -c $(SRC)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean	:
	$(RM) $(OBJ)

fclean	:	clean
	$(RM) $(NAME)

re		:	fclean all
