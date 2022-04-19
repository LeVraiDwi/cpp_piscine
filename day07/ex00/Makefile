SRCS = $(addprefix $(SRC_PATH)/,$(SRC_NAME))

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC_PATH = ./

SRC_NAME = main.cpp

OBJS = ${SRCS:.cpp=.o}

NAME = template

HEADER = -I "./"

CC = c++

RM = rm -f

.cpp.o: 
			${CC} ${CFLAGS} ${HEADER} -c $< -o $@

${NAME}:	${OBJS}
		${CC} -o ${NAME} ${OBJS} ${FLAGS}

all:		${NAME}

clean:
			${RM} ${OBJS} ${LIBFT}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY =	all clean fclean re
