DLIB	=	$(realpath lib/my)/
SRC	=	$(DLIB)my_putchar.c \
		$(DLIB)my_put_nbr.c \
		$(DLIB)my_putstr.c \
		$(DLIB)my_puterror.c \
		$(DLIB)my_strlen.c \
		$(DLIB)my_printf.c \
		$(DLIB)p_putchar.c \
		$(DLIB)p_put_nbr.c \
		$(DLIB)p_putstr.c

OBJ	=	$(SRC:.c=.o)
NAME	=	libmy.a

all: $(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f ../../$(NAME)

re:	fclean all clean
