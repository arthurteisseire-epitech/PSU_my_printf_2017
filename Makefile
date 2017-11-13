DLIB	=	$(realpath lib/my)/
DLINK	=	$(DLIB)links/
SRC	=	$(DLIB)my_putchar.c \
		$(DLIB)my_put_nbr.c \
		$(DLIB)my_putstr.c \
		$(DLIB)my_putnbr_base.c \
		$(DLIB)my_putadress.c \
		$(DLIB)my_puterror.c \
		$(DLIB)my_strlen.c \
		$(DLIB)size_of_int.c \
		$(DLIB)my_printf.c \
		$(DLINK)p_putchar.c \
		$(DLINK)p_put_nbr.c \
		$(DLINK)p_putstr.c \
		$(DLINK)p_putoctal.c \
		$(DLINK)p_puthexa_low.c \
		$(DLINK)p_puthexa_up.c \
		$(DLINK)p_putbin.c \
		$(DLINK)p_putadress.c
OBJ	=	$(SRC:.c=.o)
NAME	=	libmy.a

all: $(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
	make clean
