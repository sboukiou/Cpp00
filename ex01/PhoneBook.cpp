#include <iostream>
#include <unistd.h>
#include <cstdlib>
#include <cctype>
#include "PhoneBook.hpp"
#include "Contact.hpp"

# define MAX_BUFF 999999999

PhoneBook::PhoneBook() {
	currentIndex = 0;
	bookSize = 0;
}

bool	PhoneBook::isValidString(std::string str) const {
	if (str.length() == 0)
		return (false);
	for (size_t i = 0; i < str.length(); i += 1) {
		if (std::isprint(str[i]) == false)
			return (false);
	}
	return (true);
}

void	PhoneBook::addContact() {

	std::string userInput;


	system("clear");
	if (currentIndex == 8)
		currentIndex = 0;
	std::cout << "Enter first name:" << std::endl;
	std::getline(std::cin, userInput);
	if (std::cin.eof() == true)
		exit(0);
	while (userInput == "" || isValidString(userInput) == false) {
		std::cout << "Enter a valid input !" << std::endl;
		std::getline(std::cin, userInput);
	}
	contacts[currentIndex].setFirstName(userInput);

	std::cout << "Enter last name:" << std::endl;
	std::getline(std::cin, userInput);
	if (std::cin.eof() == true)
		exit(0);
	while (userInput == "" || isValidString(userInput) == false) {
		std::cout << "Enter a valid input !" << std::endl;
		std::getline(std::cin, userInput);
	}
	contacts[currentIndex].setLastName(userInput);

	std::cout << "Enter NickName:" << std::endl;
	std::getline(std::cin, userInput);
	if (std::cin.eof() == true)
		exit(0);
	while (userInput == "" || isValidString(userInput) == false) {
		std::cout << "Enter a valid input !" << std::endl;
		std::getline(std::cin, userInput);
	}
	contacts[currentIndex].setNickName(userInput);

	std::cout << "Enter Phone Number:" << std::endl;
	std::getline(std::cin, userInput);
	if (std::cin.eof() == true)
		exit(0);
	while (userInput == "" || isValidString(userInput) == false) {
		std::cout << "Enter a valid input !" << std::endl;
		std::getline(std::cin, userInput);
	}
	contacts[currentIndex].setPhoneNumber(userInput);

	std::cout << "Enter Your Darkest Secret ??:" << std::endl;
	std::getline(std::cin, userInput);
	if (std::cin.eof() == true)
		exit(0);
	while (userInput == "" || isValidString(userInput) == false) {
		std::cout << "Enter a valid input !" << std::endl;
		std::getline(std::cin, userInput);
	}
	contacts[currentIndex].setDarkestSecret(userInput);
	currentIndex += 1;
	if (bookSize < 8)
		bookSize += 1;
}

void	PhoneBook::printField(std::string var) const {
	if (var.length() >= 10) {
		for (int i = 0; i <= 10; i += 1)
			std::cout << var[i];
	}
	else {
		for (size_t i = 0; i <= 10 - var.length(); i += 1)
			std::cout << " ";
		std::cout << var;
	}
	std::cout << "|";

}

int PhoneBook::getCurrentIdx() {
	return currentIndex;
}


void	PhoneBook::searchContact() {

	int	Indx;

	system("clear");
	std::cout << "|     INDEX|";
	std::cout << " FIRST NAME|";
	std::cout << "  LAST NAME|";
	std::cout << "  NICK NAME|";
		std::cout << std::endl;
	for (int i = 0; i < bookSize; i += 1) {
		std::cout << "|"  "         " << i << "|";
		printField(contacts[i].getFirstName());
		printField(contacts[i].getLastName());
		printField(contacts[i].getNickName());
		std::cout << std::endl;
	}
	std::cout << "Pick a specific index to display" << std::endl;
	std::cin >> Indx;
	if (std::cin.eof() == true)
		exit(0);
	while (Indx >= bookSize || Indx < 0 || std::cin.fail()) {
		std::cin.clear();
		std::cin.ignore(MAX_BUFF, '\n');
		std::cout << "Wrong User Id given, Out of scoop" << std::endl;
		std::cin >> Indx;
	}
	system("clear");
	std::cout << "Here is the User demanded:" << std::endl;
		std::cout << "|"  "         " << Indx << "|";
		printField(contacts[Indx].getFirstName());
		printField(contacts[Indx].getLastName());
		printField(contacts[Indx].getNickName());
		std::cout << std::endl;
}
