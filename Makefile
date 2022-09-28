SRCS	= ft_toupper.c ft_toupper.c ft_atoi.c

NAME	= libft.a

OBJS	= ${SRCS:.c=.o}


HEADERS	= ./

.c.o	:
		gcc -Wall -Wextra -Werror -I ${HEADERS} -c $< -o ${<:.c=.o}

${NAME} : ${OBJS}
		ar rcs ${NAME} ${OBJS}

all : ${NAME}

bonus : $(OBJS)
		ar rcs $(NAME) $(OBJS)

clean :
		rm -f ${OBJS}

fclean : clean
		rm -f ${NAME}

re : fclean all