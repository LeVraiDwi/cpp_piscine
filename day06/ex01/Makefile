SRCS = $(addprefix $(SRC_PATH)/,$(SRC_NAME))

HEADERS = $(addprefix $(HEADER_PATH),$(HEADER_NAME))

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC_PATH = ./

SRC_NAME = main.cpp

HEADER_PATH = ./

HEADER_NAME = Data.hpp

OBJS = ${SRCS:.cpp=.o}

NAME = reinterprete

HEADER = -I "./"

CC = c++

RM = rm -f

.cpp.o: 
			${CC} ${CFLAGS} ${HEADER} -c $< -o $@

${NAME}:	${OBJS} ${HEADER_NAME}
			${CC} -o ${NAME} ${OBJS} ${FLAGS}

all:		${NAME}

clean:
			${RM} ${OBJS} ${LIBFT}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY =	all clean fclean re
