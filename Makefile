NAME = list.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC =	list_init.c \
		list_empty.c \
		list_insert_after.c \
		list_insert_front.c \
		list_insert_back.c \
		list_insert_order.c \
		list_extract_after.c \
		list_extract_front.c \
		list_extract_back.c \
		list_open.c \
		list_end.c \
		list_current.c \
		list_destroy.c \
		list_transfer.c \
		list_size.c

OBJ = ${SRC:.c=.o}

RM = rm -f

%.o: %.c
	$(CC) $(CFLAGS) -I. -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all cleann fclean re
