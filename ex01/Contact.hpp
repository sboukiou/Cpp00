#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact {
	/*Private properties of the class*/
	/*Inaccessible outside the class*/
	private:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string	phoneNumber;
		std::string darkestSecret;
		/*Public properties of the class*/
		/*Accessible outside the class*/
	public:
		/*Class constructor*/
		Contact();

		/*Getters*/
		std::string	getFirstName() const;
		std::string	getLastName() const;
		std::string	getPhoneNumber() const;
		std::string	getNickName() const;
		std::string	getDarkestSecret() const;

		/*Setters*/
		void		setFirstName(const std::string &str);
		void		setLastName(const std::string &str);
		void		setPhoneNumber(const std::string &str);
		void		setNickName(const std::string &str);
		void		setDarkestSecret(const std::string &str);
};

#endif
