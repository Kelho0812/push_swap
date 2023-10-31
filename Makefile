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
	${CC} ${CFLAGS} ${OBJECTS} -o ${NAME} $(LIBFT)

$(ODIR)/%.o: $(SDIR)/%.c
	$(CC) $(CFLAGS) -c -o $@ $<

$(LIBFT) :
	@cd ./include/libft/ && make bonus

clean :
	${RM} ${OBJECTS}
	@cd ./include/libft/ && make clean

fclean : clean
	${RM} ${NAME}
	@cd ./include/libft/ && make fclean

re : fclean all