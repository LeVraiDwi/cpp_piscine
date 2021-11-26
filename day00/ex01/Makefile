SRCS = $(addprefix $(SRC_PATH)/,$(SRC_NAME))

FLAGS = -Wall -Wextra -Werror

SRC_PATH = ./

SRC_NAME = main.cpp book.cpp page.cpp

OBJS = ${SRCS:.cpp=.o}

NAME = PhoneBook

HEADER = -I "./"

CC = clang++

RM = rm -f

.c.o: 
			${CC} ${CFLAGS} ${HEADER} -c $< -o $@

${NAME}:	${OBJS}

all:		${NAME}
		${CC} -o ${NAME} ${OBJS} ${FLAGS}


clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY =	all clean fclean re
