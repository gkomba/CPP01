NAME=zombie
SRC=Zombie.cpp\
	main.cpp\
	newZombie.cpp\
	randomChump.cpp\

OBJS=${SRC:.cpp=.o}
CPP= c++
CPPFLAGS=-std=c++98
FLAGS=-Wall -Wextra -Werror



all: ${NAME}

${NAME}: ${OBJS}
	${CPP} ${FLAGS} ${CPPFLAGS} -o ${NAME} ${OBJS}

clean: 
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re