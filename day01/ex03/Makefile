SRCS = $(addprefix $(SRC_PATH)/,$(SRC_NAME))

FLAGS = -Wall -Wextra -Werror

SRC_PATH = ./

SRC_NAME = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

OBJS = ${SRCS:.cpp=.o}

NAME = unes_violence

HEADER = -I "./"

CC = clang++

RM = rm -f

.c.o: 
			${CC} ${FLAGS} ${HEADER} -c $< -o $@

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${OBJS} ${FLAGS}

all:		${NAME}

clean:
			${RM} ${OBJS} ${LIBFT}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY =	all clean fclean re
