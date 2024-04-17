NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror 

LIB_FLAGS = -Llibft -lft

INCLUDE = -I ./includes -I ./libft -I 

SRCS = srcs/push_swap.c\
		srcs/args_checks.c\
		srcs/args_process.c\
		srcs/utils.c \
		srcs/ft_free.c \
		srcs/ft_check_utils.c \
		srcs/operations.c \
		srcs/operations_2.c \
		srcs/operations_3.c \
		srcs/sort.c \
		srcs/rotate_type.c \
		srcs/rotate_and_push.c \
		srcs/find_place.c \
		srcs/solver_a.c \
		srcs/solver_b.c \

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
