SRCS = $(addprefix $(SRC_PATH)/,$(SRC_NAME))

CFLAGS := -Wall -Wextra -Werror

SRC_PATH = ./

SRC_NAME = main.cpp Bureaucrat.cpp Form.cpp

OBJS = ${SRCS:.cpp=.o}

NAME = Form

HEADER = -I "./"

CC = clang++

RM = rm -f

.c.o: 
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
