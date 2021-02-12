
SRCFOLD	= 	./

HEADFOLD= 	./

SRCS	=	${SRCFOLD}ft_atoi.c			\
			${SRCFOLD}ft_bzero.c			\
			${SRCFOLD}ft_calloc.c			\
			${SRCFOLD}ft_isalnum.c		\
			${SRCFOLD}ft_isalpha.c		\
			${SRCFOLD}ft_isascii.c		\
			${SRCFOLD}ft_isdigit.c		\
			${SRCFOLD}ft_isprint.c		\
			${SRCFOLD}ft_memccpy.c		\
			${SRCFOLD}ft_memchr.c			\
			${SRCFOLD}ft_memcmp.c			\
			${SRCFOLD}ft_memcpy.c			\
			${SRCFOLD}ft_memmove.c		\
			${SRCFOLD}ft_memset.c			\
			${SRCFOLD}ft_strchr.c			\
			${SRCFOLD}ft_strdup.c			\
			${SRCFOLD}ft_strlcat.c		\
			${SRCFOLD}ft_strlcpy.c		\
			${SRCFOLD}ft_strlen.c			\
			${SRCFOLD}ft_strncmp.c		\
			${SRCFOLD}ft_strnstr.c		\
			${SRCFOLD}ft_strrchr.c		\
			${SRCFOLD}ft_tolower.c		\
			${SRCFOLD}ft_toupper.c		\
			${SRCFOLD}ft_itoa.c			\
			${SRCFOLD}ft_putchar_fd.c		\
			${SRCFOLD}ft_putendl_fd.c		\
			${SRCFOLD}ft_putnbr_fd.c		\
			${SRCFOLD}ft_putstr_fd.c		\
			${SRCFOLD}ft_split.c			\
			${SRCFOLD}ft_strjoin.c		\
			${SRCFOLD}ft_strmapi.c		\
			${SRCFOLD}ft_strtrim.c		\
			${SRCFOLD}ft_substr.c			\
			
SRCSBONUS =	${SRCFOLD}ft_atoi.c			\
			${SRCFOLD}ft_bzero.c			\
			${SRCFOLD}ft_calloc.c			\
			${SRCFOLD}ft_isalnum.c		\
			${SRCFOLD}ft_isalpha.c		\
			${SRCFOLD}ft_isascii.c		\
			${SRCFOLD}ft_isdigit.c		\
			${SRCFOLD}ft_isprint.c		\
			${SRCFOLD}ft_memccpy.c		\
			${SRCFOLD}ft_memchr.c			\
			${SRCFOLD}ft_memcmp.c			\
			${SRCFOLD}ft_memcpy.c			\
			${SRCFOLD}ft_memmove.c		\
			${SRCFOLD}ft_memset.c			\
			${SRCFOLD}ft_strchr.c			\
			${SRCFOLD}ft_strdup.c			\
			${SRCFOLD}ft_strlcat.c		\
			${SRCFOLD}ft_strlcpy.c		\
			${SRCFOLD}ft_strlen.c			\
			${SRCFOLD}ft_strncmp.c		\
			${SRCFOLD}ft_strnstr.c		\
			${SRCFOLD}ft_strrchr.c		\
			${SRCFOLD}ft_tolower.c		\
			${SRCFOLD}ft_toupper.c		\
			${SRCFOLD}ft_itoa.c			\
			${SRCFOLD}ft_putchar_fd.c		\
			${SRCFOLD}ft_putendl_fd.c		\
			${SRCFOLD}ft_putnbr_fd.c		\
			${SRCFOLD}ft_putstr_fd.c		\
			${SRCFOLD}ft_split.c			\
			${SRCFOLD}ft_strjoin.c		\
			${SRCFOLD}ft_strmapi.c		\
			${SRCFOLD}ft_strtrim.c		\
			${SRCFOLD}ft_substr.c			\
			${SRCFOLD}ft_lstadd_back.c	\
			${SRCFOLD}ft_lstadd_front.c	\
			${SRCFOLD}ft_lstclear.c		\
			${SRCFOLD}ft_lstdelone.c		\
			${SRCFOLD}ft_lstiter.c		\
			${SRCFOLD}ft_lstlast.c		\
			${SRCFOLD}ft_lstmap.c			\
			${SRCFOLD}ft_lstnew.c			\
			${SRCFOLD}ft_lstsize.c			

HEADER	=	${HEADFOLD}ftlib.h

OBJS	= 	${SRCS:.c=.o}

OBJSBON	= 	${SRCSBONUS:.c=.o}

NAME	= 	libft.a

CC		=	gcc
RM		=	rm -f
CFLAGS	=	-Wall -Werror -Wextra

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${HEADFOLD}

$(NAME):	${OBJS}
			ar rc $(NAME) ${OBJS}

all:		$(NAME)

clean:
			${RM} ${OBJSBON}

fclean:		clean
			${RM} $(NAME)

bonus:		${OBJSBON}
			ar rc $(NAME) ${OBJSBON}

re:			fclean all
