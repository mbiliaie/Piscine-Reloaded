TASK = ft_display_file
СFLAGS = -Wall -Werror -Wextra
SRCS = *.c
HEADER = *.h
OUT = *.o

NAME = libft.a


all: $(NAME)

$(NAME):
		gcc -c $(СFLAGS) $(SRCS)
		ar crs $(NAME) $(OUT) $(HEADER)
		gcc  -L. -lft -o $(TASK) $(TASK).o
clean:
		rm -f $(OUT) $(NAME)
fclean:
		rm -f $(NAME)

re: fclean all
