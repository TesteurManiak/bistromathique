NAME	=	calc

SRC	=	main.c \
		my_putstr.c \
		my_puterr.c \
		check_args.c \
		my_strlen.c \
		bistro.c \
		infin_add.c \
		my_strcpy.c \
		my_strdup.c \
		my_strcmp.c \
		aff_result.c \
		infin_subs.c \
		check_less.c \
		del_neg.c

OBJ	=	$(SRC:.c=.o)

all:		$(NAME)

$(NAME):
		gcc -o $(NAME) $(SRC) -Wall -Wextra -Werror

clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)

re:		fclean all

.PHONY:	all clean fclean re
