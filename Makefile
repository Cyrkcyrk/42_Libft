
SRCFOLD	= 	./srcs/

HEADFOLD= 	./includes/

SRCS	=	${SRCFOLD}part1/ft_atoi.c			\
			${SRCFOLD}part1/ft_bzero.c			\
			${SRCFOLD}part1/ft_calloc.c			\
			${SRCFOLD}part1/ft_isalnum.c		\
			${SRCFOLD}part1/ft_isalpha.c		\
			${SRCFOLD}part1/ft_isascii.c		\
			${SRCFOLD}part1/ft_isdigit.c		\
			${SRCFOLD}part1/ft_isprint.c		\
			${SRCFOLD}part1/ft_memccpy.c		\
			${SRCFOLD}part1/ft_memchr.c			\
			${SRCFOLD}part1/ft_memcmp.c			\
			${SRCFOLD}part1/ft_memcpy.c			\
			${SRCFOLD}part1/ft_memmove.c		\
			${SRCFOLD}part1/ft_memset.c			\
			${SRCFOLD}part1/ft_strchr.c			\
			${SRCFOLD}part1/ft_strdup.c			\
			${SRCFOLD}part1/ft_strlcat.c		\
			${SRCFOLD}part1/ft_strlcpy.c		\
			${SRCFOLD}part1/ft_strlen.c			\
			${SRCFOLD}part1/ft_strncmp.c		\
			${SRCFOLD}part1/ft_strnstr.c		\
			${SRCFOLD}part1/ft_strrchr.c		\
			${SRCFOLD}part1/ft_tolower.c		\
			${SRCFOLD}part1/ft_toupper.c		\
			${SRCFOLD}part2/ft_itoa.c			\
			${SRCFOLD}part2/ft_putchar_fd.c		\
			${SRCFOLD}part2/ft_putendl_fd.c		\
			${SRCFOLD}part2/ft_putnbr_fd.c		\
			${SRCFOLD}part2/ft_putstr_fd.c		\
			${SRCFOLD}part2/ft_split.c			\
			${SRCFOLD}part2/ft_strjoin.c		\
			${SRCFOLD}part2/ft_strmapi.c		\
			${SRCFOLD}part2/ft_strtrim.c		\
			${SRCFOLD}part2/ft_substr.c


HEADER	=	${HEADFOLD}ftlib.h

OBJS	= 	${SRCS:.c=.o}

NAME	= 	libft.a

CC		=	gcc
RM		=	rm -f
CFLAGS	=	-Wall -Werror -Wextra

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${HEADFOLD}

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all
