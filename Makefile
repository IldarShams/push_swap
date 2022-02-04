NAME = push_swap
SRCS = push_swap.c selection_sort.c quick_sort.c small_stack_sort.c \
		modified_quick_sort.c quick4elem.c sort3elem_b.c small_stack_sort2.c \
		utils.c utils2.c utils3.c utils4.c utils5.c utils6.c utils7.c 
SRCS_B = b_checker.c \
		utils.c utils2.c utils3.c utils4.c utils5.c utils6.c utils7.c utils8.c
		
LIB_PATH = ./Libft
HEADER = push_swap.h
OBJ =   $(SRCS:%.c=%.o)
OBJ_B =   $(SRCS_B:%.c=%.o)
RM = rm -f
CFLAGS  =   -Wall -Wextra -Werror -I $(HEADER)
.PHONY  :   all clean fclean re
all	:   $(NAME)
$(NAME) : $(OBJ) ${HEADER}
	cd ./Libft && make -f Makefile2
	gcc $(CFLAGS) $(OBJ) -o $@ -L ./Libft -lft
%.o : %.c ${HEADER}
	gcc $(CFLAGS) -c $< -o $@
clean   :
	$(RM) $(OBJ) $(OBJ_B) get_next_line*.o
	cd ./Libft && make -f Makefile2 clean
fclean  :   clean
	$(RM) $(NAME) checker
	cd ./Libft && make -f Makefile2 fclean
gnl:
	gcc -c ./get_next_line/*bonus.c
bonus	: gnl $(OBJ_B) ${HEADER} 
	gcc $(CFLAGS) $(OBJ_B) get_next_line*.o -o checker -L ./Libft -lft

re      :   fclean all