SRCS =	srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_swap.c srcs/ft_strcmp.c srcs/ft_strlen.c
OBJS =	${SRCS:.c=.o}
CC =	gcc
CFLAGS =	-Wall -Wextra -Werror
NAME =	libft.a
INCLUDE = -I includes/

.c.o: 
		${CC} ${CFLAGS} ${INCLUDE} -c $< -o ${<:.c=.o} 
${NAME}: ${OBJS}
		ar rc ${NAME} ${OBJS}
all: ${NAME}

clean:
		rm -f ${OBJS}
fclean: clean
		rm -f ${NAME}
re:	fclean all
