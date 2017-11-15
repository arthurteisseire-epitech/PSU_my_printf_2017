##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Arthur Teisseire
##

INC	=	$(realpath ../lib/my)
DLIB	=	$(realpath ../lib/my)
LIB	=	my
DSRC_UT	=	$(realpath .)
SRC_UT	=	$(DSRC_UT)/test-args.c
CFLAGS	=	-Wall -W -Wextra -I$(INC) -L$(DLIB) -l$(LIB) -g
LDFLAGS	=	-lcriterion -lgcov
OBJ	=	$(SRC:.c=.o) $(SRC_UT:.c=.o)
NAME	=	units

all: $(NAME)

$(NAME):	$(OBJ)
	make re -C ..
	gcc -o $(NAME) $(OBJ) $(CFLAGS) $(LDFLAGS)

clean:
	rm -f *.gcno
	rm -f *.gcna
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
	make clean
