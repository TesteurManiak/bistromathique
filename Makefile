NAME	=	calc

SRC	=	src/main.c \
		src/my_putstr.c \
		src/my_puterr.c \
		src/check_args.c \
		src/my_strlen.c \
		src/bistro.c \
		src/infin_add.c \
		src/my_strcpy.c \
		src/my_strdup.c \
		src/my_strcmp.c \
		src/aff_result.c \
		src/infin_subs.c \
		src/check_less.c \
		src/del_neg.c \
		src/infin_mult.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Wall -Wextra -Werror

all:		$(NAME)

$(NAME):
		gcc -o $(NAME) $(SRC) $(CFLAGS)

clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)

re:		fclean all

.PHONY:	all clean fclean re
