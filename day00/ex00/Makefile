SRCS = $(addprefix $(SRC_PATH)/,$(SRC_NAME))

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC_PATH = ./

SRC_NAME = megaphone.cpp

OBJS = ${SRCS:.cpp=.o}

NAME = megaphone

CC = g++

RM = rm -f

.c.o: 
			${CC} ${FLAGS} ${HEADER} -c $@ -o $<

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${OBJS} ${FLAGS}

all:		${NAME}

clean:
			${RM} ${OBJS} ${LIBFT}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY =	all clean fclean re
