##
## Makefile for Makefile in /home/fossae_t/rendu/CPE_2015_BSQ
## 
## Made by Fossaert Thomas
## Login   <fossae_t@epitech.net>
## 
## Started on  Thu Dec  3 17:26:14 2015 Fossaert Thomas
## Last update Thu Dec  3 17:26:19 2015 Fossaert Thomas
##

SRC=		my_putchar.c \

OBJ=            $(SRC:.c=.o)

NAME=           bsq

all:            $(NAME)


$(NAME):
		gcc -c $(SRC)
		gcc -o $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all
