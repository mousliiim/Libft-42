SRCS	= ft_isalpha.c ft_isdigit.c ft_atoi.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c \
		ft_strdup.c ft_toupper.c ft_tolower.c ft_strchr.c

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
