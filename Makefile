NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror 

LIB_FLAGS = -Llibft -lft

INCLUDE = -I ./includes -I ./libft -I 

SRCS = srcs/push_swap.c\
		srcs/arguments.c\
		srcs/error.c \
		srcs/utils.c \

OBJ = $(SRCS:%.c=%.o)

all: ${NAME}

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDE) -O2 -c $< -o $(<:%.c=%.o)

$(NAME): $(OBJ)
	make all -C ./libft
	$(CC) $(CFLAGS) $(OBJ) $(LIB_FLAGS)  -o $(NAME)

clean:
	rm -rf $(OBJ)
	rm -rf /a.out
	make clean -C ./libft 

fclean: clean
	rm -f $(NAME)
	make fclean -C ./libft 
	
re:	fclean all

.PHONY: all clean fclean re
