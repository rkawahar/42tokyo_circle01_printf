SRCS = ft_print_specifier.c ft_printf.c
NAME = libftprintf.a
CC = cc
CFLGS = -Wall -Wextra -Werror
OBJS = $(SRCS:.c=.o)
RM = rm -f
AR = ar rc

all : $(NAME)

$(NAME) : $(OBJS)
	$(AR) $@ $^
	ranlib $(NAME)

%.o : %.c
	$(CC) $(CFLGS) -c $^ -o $@

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re 