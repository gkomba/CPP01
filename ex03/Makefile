NAME=Unnecessaryviolence
SRC=main.cpp\
	HumanA.cpp\
	HumanB.cpp\
	Weapon.cpp\

OBJS=${SRC:.cpp=.o}
CPP=c++
CPPFLAGS=-std=c++98
FLAGS=-Wall -Wextra -Werror
RM=rm -rf

all: ${NAME}

${NAME}: ${OBJS}
	${CPP} ${CPPFLAGS} ${FLAGS} -o ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re