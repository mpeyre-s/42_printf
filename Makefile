NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -I$(LIBFT_PATH)
AR = ar
ARFLAGS = rcs
RM = rm -rf
SRC = ft_printf.c printhex.c printletters.c printnumbers.c printptr.c
OBJ_DIR = obj
OBJS = $(SRC:%.c=$(OBJ_DIR)/%.o)
LIBFT_PATH = ./libft
LIBFT = $(LIBFT_PATH)/libft.a

$(OBJ_DIR)/%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ_DIR) $(OBJS)
	cp  $(LIBFT) $(NAME)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

$(LIBFT):
	make -C $(LIBFT_PATH) all

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	make -C $(LIBFT_PATH) clean
	$(RM) $(OBJ_DIR)

fclean: clean
	make -C $(LIBFT_PATH) fclean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re libft
