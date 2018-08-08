##
## Makefile for Makefile in /home/jeremy.el-kaim/CPool_infinadd
## 
## Made by jeremy elkaim
## Login   <jeremy.el-kaim@epitech.net>
## 
## Started on  Mon Oct 24 11:40:10 2016 jeremy elkaim
## Last update Mon Dec  5 15:24:36 2016 jeremy elkaim
##

NAME    = my_popup

SRC    = my_popup.c

OBJ    = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
		gcc $(OBJ) -o $(NAME)

clean:
		rm -rf $(OBJ)

fclean:			clean
			rm -rf $(NAME)

re:			fclean all

.PHONY:			all clean fclean re
