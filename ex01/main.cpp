#include <iostream>
#include <cstdlib>
#include "./PhoneBook.hpp"

int main(void) {
	std::string userInput;
	
	PhoneBook telePhone;

	while (true) {
		std::cout << "Pick a choice:" << std::endl;
		std::getline(std::cin , userInput);
		if (std::cin.eof() == true)
			exit(0);
		std::cout << "You Picked the choice [ " << userInput << " ]" << std::endl;
		if (userInput == "ADD")
			telePhone.addContact();
		if (userInput == "SEARCHE")
			telePhone.searchContact();
		if (userInput == "EXIT")
			break;
	}
	return (0);

}
