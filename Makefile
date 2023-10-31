NAME = push_swap

LIBFT = ./include/libft/libft.a

CC = cc

CFLAGS = -Werror -Wall -Wextra

RM = rm -rf

SDIR := src
ODIR := obj

SOURCES := $(wildcard $(SDIR)/*.c)
OBJECTS := $(patsubst $(SDIR)/%.c, $(ODIR)/%.o, $(SOURCES))

all : ${NAME}

${NAME} : ${OBJECTS} $(LIBFT)
	@${CC} ${CFLAGS} ${OBJECTS} -o ${NAME} $(LIBFT)
	@echo "push_swap created"

$(ODIR)/%.o: $(SDIR)/%.c
	@$(CC) $(CFLAGS) -c -o $@ $<
	@echo "push_swap objects created"

$(LIBFT) :
	@cd ./include/libft/ && make bonus -s
	@echo "libft.a created"

clean :
	@${RM} ${OBJECTS}
	@echo "push_swap objects deleted"
	@cd ./include/libft/ && make clean -s
	@echo "libft objects deleted"

fclean : clean
	@${RM} ${NAME}
	@echo "push_swap deleted"
	@cd ./include/libft/ && make fclean -s
	@echo "libft.a deleted"

re : fclean all