NAME = list.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC =	list_init.c \
		list_isempty.c \
		list_insertafter.c \
		list_insertbefore.c \
		list_addfront.c \
		list_addback.c
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
