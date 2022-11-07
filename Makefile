SRCS	= ft_isalpha.c ft_isdigit.c ft_atoi.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c \
		ft_strdup.c ft_toupper.c ft_tolower.c ft_strchr.c ft_memset.c ft_bzero.c ft_strncmp.c \
		ft_strrchr.c ft_strlcpy.c ft_calloc.c ft_memcmp.c ft_memcpy.c ft_memchr.c ft_memmove.c \
		ft_strlcat.c ft_strnstr.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
		ft_substr.c ft_strmapi.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_striteri.c \

OBJS			= $(SRCS:.c=.o)

BONUS_OBJS		= $(BONUS:.c=.o)

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

bonus:			$(OBJS) $(BONUS_OBJS)
				ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS)
	gcc -nostartfiles -shared -o libft.so $(OBJS)

myclean:
	$(info ************  Je clean pour toi 😉  *************)
	@rm *.o
	$(info Supprimme tout les fichiers .o ✅)
	@rm libft.so
	$(info Suprimme le fichier libft.so pour le Checker ✅)
	@rm a.out
	$(info Suprimme le fichier a.out pour le Checker ✅)
	@rm libft.a
	$(info Suprimme le fichier libft.a ✅)
	$(info ************  Et voila c'est fait  *************)

.PHONY:			all clean fclean re bonus
