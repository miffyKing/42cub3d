CC = gcc
CFLAGS = -Wall -Wextra -Werror -Iinclude
NAME = libgnl.a

SRCS = get_next_line.c get_next_line_utils.c

OBJS = $(SRCS:.c=.o)

.PHONY : all clean fclean re

all : $(NAME)

$(NAME) : $(OBJS)
	ar rc $@ $^

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean : $(OBJS)
	@rm -f $(OBJS)

fclean : $(OBJS) $(OBJS) $(NAME)
	@rm -f $^

re : fclean
	make all
