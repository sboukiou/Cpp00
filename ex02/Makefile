CPP=c++
CFLAGS=-Wall -Werror -Wextra -std=c++98

BASE=Account.cpp
SRC=Account.cpp tests.cpp
 
EX=$(basename $(BASE))

all: $(SRC)
	$(CPP) $(CFLAGS) $(SRC) -o $(EX)
clean: 
	$(RM) $(EX)

fclean: clean

re: fclean all
