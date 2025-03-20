NAME=zombie
SRC=Zombie.cpp\
	main.cpp\
	newZombie.cpp\
	randomChump.cpp\

OBJS=${SRC:.cpp=.o}
CXX= c++
CXXFLAGS=-std=c++98
FLAGS=-Wall -Wextra -Werror

all: ${NAME}

${NAME}: ${OBJS}
	${CXX} ${FLAGS} ${CXXFLAGS} -o ${NAME} ${OBJS}

clean: 
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re