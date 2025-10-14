CPP=c++
CFLAGS=-Wall -Werror -Wextra -std=c++98

BASE=main.cpp
SRC=Contact.cpp  main.cpp  PhoneBook.cpp
 
EX=$(basename $(BASE))

all: $(SRC)
	$(CPP) $(CFLAGS) $(SRC) -o $(EX)
clean: 
	$(RM) $(EX)

fclean: clean

re: fclean all
