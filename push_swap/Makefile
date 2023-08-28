CFLAGS = -Wall -Werror -Wextra
INC = includes
SRCS_DIR = sources
OBJS_DIR = obj
LIB_DIR = libft

SRCS_FILE = main.c verifier.c stack.c stack_util1.c sort_util.c
OBJS_FILE = $(SRCS_FILE:.c=.o)

SRCS = $(addprefix $(SRCS_DIR)/, $(SRCS_FILE))
OBJS = $(addprefix $(OBJS_DIR)/, $(OBJS_FILE))

LIB = $(LIB_DIR)/libft.a
NAME = push_swap

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(LIB) $(OBJS)
	cc $(CFLAGS) $^ -o $@ -I $(INC)

$(LIB):
	make -C $(LIB_DIR) all

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.c
	cc $(CFLAGS) -c $< -o $@ -I $(INC)

clean:
	rm -rf $(OBJS)
	make -C $(LIB_DIR) clean

fclean: clean
	rm -rf $(NAME)
	make -C $(LIB_DIR) fclean

re:
	make -C $(LIB_DIR) re
	make fclean
	make all
