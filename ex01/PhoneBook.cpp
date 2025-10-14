#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook() {
	currentIndex = 0;
	OldestContactIdx = 0;
}

void	PhoneBook::addContact() {
	std::string userInput;
	if (currentIndex == 8)
		currentIndex = 0;
	std::cout << "Enter first name:" << std::endl;
	std::getline(std::cin, userInput);
	while (userInput == "")
		std::cout << "[Nothing Was Given !!] Enter first name:" << std::endl;
	contacts[currentIndex].setFirstName(userInput);

	std::cout << "Enter last name:" << std::endl;
	std::getline(std::cin, userInput);
	while (userInput == "")
		std::cout << "[Nothing Was Given !!] Enter last name:" << std::endl;
	contacts[currentIndex].setLastName(userInput);

	std::cout << "Enter NickName:" << std::endl;
	std::getline(std::cin, userInput);
	while (userInput == "")
		std::cout << "[Nothing Was Given !!] Enter nickname:" << std::endl;
	contacts[currentIndex].setNickName(userInput);

	std::cout << "Enter Phone Number:" << std::endl;
	std::getline(std::cin, userInput);
	while (userInput == "")
		std::cout << "[Nothing Was Given !!] Enter Phone Number:" << std::endl;
	contacts[currentIndex].setPhoneNumber(userInput);

	std::cout << "Enter Your Darkest Secret ??:" << std::endl;
	std::getline(std::cin, userInput);
	while (userInput == "")
		std::cout << "[Nothing Was Given !!] Enter Your secret:" << std::endl;
	contacts[currentIndex].setDarkestSecret(userInput);
}

void	PhoneBook::searchContact() {

}

void PhoneBook::initPhone() {
	std::cout << "Pick a choice:" << std::endl;
	std::getline(std::cin , userInput);
	std::cout << "You Picked the choice [ " << userInput << " ]" << std::endl;
	if (userInput == "ADD")
		addContact();
	if (userInput == "SEARCHE")
		searchContact();
	if (userInput == "EXIT")
		exit(0);
}
