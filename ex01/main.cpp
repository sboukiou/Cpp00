#include <iostream>
#include <cstdlib>
#include "./PhoneBook.hpp"

static bool	isOption(std::string var) {
	if (var == "ADD")
		return (true);
	else if (var == "SEARCH")
		return (true);
	else if (var == "EXIT")
		return (true);
	return (false);
}

int main(void) {
	std::string userInput;
	
	PhoneBook telePhone;

	while (true) {
		std::cout << "[Pick a choice]:" << std::endl;
		std::getline(std::cin , userInput);
		if (std::cin.eof() == true)
			exit(0);
		while (userInput == "" || telePhone.isValidString(userInput) == false ||
				isOption(userInput) == false) {
			std::cout << "Invalid Choice ! Your Choices are :[ADD] [SEARCH] [EXIT]" << std::endl;
			std::getline(std::cin , userInput);
			if (std::cin.eof() == true)
				exit(0);
		}
		if (userInput == "ADD")
			telePhone.addContact();
		else if (userInput == "SEARCH")
			telePhone.searchContact();
		else if (userInput == "EXIT")
			break;
	}
	return (0);

}
