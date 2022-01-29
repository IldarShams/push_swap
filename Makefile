NAME = push_swap
SRCS = push_swap.c utils.c utils2.c utils3.c utils4.c utils5.c \
		selection_sort.c quick_sort.c small_stack_sort.c \
		modified_quick_sort.c
LIB_PATH = ./Libft
HEADER = push_swap.h
OBJ =   $(SRCS:%.c=%.o)
RM = rm -f
CFLAGS  =   -Wall -Wextra -Werror -I $(HEADER)
.PHONY  :   all clean fclean re
all	:   $(NAME)
$(NAME) : $(OBJ) ${HEADER}
	cd ./Libft && make
	gcc $(CFLAGS) $(OBJ) -o $@ -L ./Libft -lft
%.o : %.c ${HEADER}
	gcc $(CFLAGS) -c $< -o $@
clean   :
	$(RM) $(OBJ) $(OBJ_B)
fclean  :   clean
	$(RM) $(NAME)
re      :   fclean all