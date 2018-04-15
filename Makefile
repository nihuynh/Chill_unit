#!bin/sh
NAME	:=	test.chill
CC		:=	gcc
CFLAGS	:=	-Werror -Wall -Wextra -I.
RM		:=	/bin/rm -f
SRC		:=	chill_unit.c main.c

all: fclean $(NAME)
$(NAME):
	@$(CC) $(CFLAGS) $(SRC) -o $@ && ./$@
clean:
	@$(RM) $(OBJ)
fclean: clean
	@$(RM) $(NAME)
re: fclean all
.PHONY:all, $(NAME), clean fclean, re
