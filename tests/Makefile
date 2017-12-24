##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Arthur Teisseire
##

ROOT	=	$(realpath ..)
DSRC_UT	=	$(realpath .)
SRC_UT	=	$(DSRC_UT)/tests-my_printf.c
LIB_DIR	=	$(realpath ../lib/my)
INC	=	$(LIB_DIR)/include
LIB	=	my
LIBS	=	-L$(ROOT) -l$(LIB)
CFLAGS	=	-Wall -W -Wextra -I$(INC)
LDFLAGS	=	-lcriterion -lgcov
OBJ	=	$(SRC_UT:.c=.o)
NAME	=	units

all: $(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS) $(LDFLAGS) $(LIBS)

clean:
	rm -f *.gcno
	rm -f *.gcna
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
