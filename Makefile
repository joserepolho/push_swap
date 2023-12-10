NAME = push_swap
CC = gcc
RM = rm -f
FLAGS = -Wall -Wextra -Werror
LIBFTDIR = libft/
OBJ_DIR = obj/
SRC_DIR = srcs/

SRC_1 = srcs/push_swap.c \

SRC_2 =	srcs/add_to_stack.c \
		srcs/arg_in_stack_a.c \
		srcs/cheapest_rotate.c \
		srcs/check_sort.c \
		srcs/double_check.c \
		srcs/error_print.c \
		srcs/free_double.c \
		srcs/index.c \
		srcs/minmax.c \
		srcs/order.c \
		srcs/rotate_push.c \
		srcs/rotate_times.c \
		srcs/rotates.c \
		srcs/sames.c \
		srcs/sort.c \
		srcs/stack_free.c \
		srcs/swap_pushes.c \
		srcs/libft_lst.c \


OBJ_1 = ${SRC_1:.c=.o}
OBJ_2 = ${SRC_2:.c=.o}

INCLUDE = -L ./libft -lft

.c.o:
	${CC} -c $< -o ${<:.c=.o}

${NAME}: ${OBJ_1} ${OBJ_2}
	make -C $(LIBFTDIR)
	${CC} ${FLAGS} ${OBJ_1} ${OBJ_2} -o ${NAME} ${INCLUDE}

all: ${NAME}

clean:
	${RM} ${OBJ_1} ${OBJ_2} ${NAME}
	@cd $(LIBFTDIR) && $(MAKE) clean

fclean: clean
	${RM} ${NAME}
	@cd $(LIBFTDIR) && $(MAKE) fclean

re: clean all

.PHONY: all clean fclean re