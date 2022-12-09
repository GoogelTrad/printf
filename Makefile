SRCS = ft_atoi.c ft_aux_s.c ft_aux.c ft_hex.c ft_itoa.c ft_printf.c ft_putnbr.c
OBJS = $(SRCS:.c=.o)
CC = gcc
FLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean: 
	rm -rf $(OBJS)

fclean: clean 
	rm -rf $(NAME)

re: fclean all
	
.PHONY: all ${NAME} clean flcean re

%.o: %.c
	$(CC) $(FLAGS) -I includes/ -c $< -o $(<:.c=.o)