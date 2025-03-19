NAME=Sedisforlosers
SRC=main.cpp
OBJ=${SRC:.cpp=.o}
CXX=c++
CXXFLAGS=-std=c++98
FLAGS=-Wall -Wextra -Werror
RM=rm -rf

all: ${NAME}

${NAME}: ${OBJ}
	${CXX} ${CXXFLAGS} ${FLAGS} -o ${NAME} ${OBJ}

clean:
	${RM} ${OBJ}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re