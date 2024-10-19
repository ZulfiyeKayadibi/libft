SRCS = ft_isalpha.c	/
ft_isdigit.c	/
ft_isalnum.c	/
ft_isascii.c	/
ft_isprint.c	/
ft_strlen.c	/
ft_memset.c	/
ft_toupper.c	/
ft_tolower.c	/
ft_strchr.c	/
	
OBJS = ${SRCS:.c=.o}
NAME = libft.a
CC = cc
FLAGS = -Wall -Werror -Wextra


all: $(NAME)
	
$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all re

.PHONY: all clean fclean re