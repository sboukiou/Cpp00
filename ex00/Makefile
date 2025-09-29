CPP=c++
CFLAGS=-Wall -Werror -Wextra -std=c++98

SRC=megaphone.cpp
EX=$(basename $(SRC))

all: $(SRC)
	$(CPP) $(CFLAGS) $(SRC) -o $(EX)
clean: 
	$(RM) $(EX)

fclean: clean

re: fclean all
