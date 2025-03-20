NAME=Harl
TESTER=tester
SRC=main.cpp\
	Harl.cpp\

SRCT=Harl_tester.cpp\
	Harl.cpp

OBJ=${SRC:.cpp=.o}
OBJT=${SRCT:.cpp=.o}
CXX=c++
CXXFLAGS=-std=c++98
FLAGS=-Wall -Wextra -Werror
RM=rm -rf

###################################################
##				Harl COMPILER					 ##
###################################################

all: ${NAME}

${NAME}: ${OBJ}
	${CXX} ${CXXFLAGS} ${FLAGS} -o ${NAME} ${OBJ}

clean:
	${RM} ${OBJ}

fclean: clean
	${RM} ${NAME}

re: fclean all

###################################################
##				TESTER COMPILER					 ##
###################################################

tester: ${OBJT}
	${CXX} ${CXXFLAGS} ${FLAGS} -o ${TESTER} ${OBJT}

cleant:
	${RM} ${OBJT}

fcleant: clean
	${RM} ${TESTER}

ret: fcleant tester

.PHONY: all clean fclean re tester cleant fcleant ret

uid=101236(edalexan) gid=4224(2024_luanda) groups=204(_developer),4224(2024_luanda)
