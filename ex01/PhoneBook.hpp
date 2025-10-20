#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

#include "./Contact.hpp"
#include <string>

class PhoneBook {
	private:
		Contact contacts[8];
		int		currentIndex;
		int		bookSize;
		std::string userInput;
	public:
		PhoneBook();
		void	addContact();
		void	searchContact();
		void	initPhone();
		int		getCurrentIdx();
		void	printField(std::string var) const;
			
			
};

#endif
