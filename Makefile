##
## Makefile for Makefile in /home/fossae_t/rendu/CPE_2015_BSQ
## 
## Made by Fossaert Thomas
## Login   <fossae_t@epitech.net>
## 
## Started on  Thu Dec  3 17:26:14 2015 Fossaert Thomas
## Last update Wed Dec 16 09:18:51 2015 Fossaert Thomas
##

SRC=		bsq.c \
		count.c \
		square.c

CFLAGS=		-Wall -Wextra -ggdb3 -g

OBJ=            $(SRC:.c=.o)

NAME=           bsq

all:            $(NAME)


$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all
