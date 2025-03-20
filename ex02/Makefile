NAME=addressManipulation
SRC=main.cpp

OBJS=${SRC:.cpp=.o}
CXX=c++
CXXFLAGS=-std=c++98
FLAGS=-Wall -Wextra -Werror
RM=rm -f

all: ${NAME}

${NAME}: ${OBJS}
	${CXX} ${CXXFLAGS} ${FLAGS} -o ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re