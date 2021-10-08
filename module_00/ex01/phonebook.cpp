#include "phonebook.hpp"

void PhoneBook::displayContacts() {
	std::string fName;
	std::string lName;
	std::string nName;

	std::cout << "Here is your contact list" << std::endl;
	std::cout << "------------------------------" << std::endl;
	for (int i = 0; i < 8; i++) {
		fName = ContactsArray[i].getFirstName();
		lName = ContactsArray[i].getLastName();
		nName = ContactsArray[i].getNickName();

		std::cout << std::setw(10);
		std::cout << i + 1 << "|";
		// Printing first name
		if (fName.length() == 10)
			std::cout << fName << "|";
		else if (fName.length() > 10)
			std::cout << fName.substr(0, 9) << "." << "|";
		else {
			std::cout << std::setw(10);
			std::cout << fName << "|";
		}
		// Printing last name
		if (lName.length() == 10)
			std::cout << lName << "|";
		else if (lName.length() > 10)
			std::cout << lName.substr(0, 9) << "." << "|";
		else {
			std::cout << std::setw(10);
			std::cout << lName << "|";
		}
		// Printing nickname
		if (nName.length() == 10)
			std::cout << nName << "|";
		else if (nName.length() > 10)
			std::cout << nName.substr(0, 9) << "." << "|";
		else {
			std::cout << std::setw(10);
			std::cout << nName << "|";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

void PhoneBook::addNewContact(int index) {
	std::string fName;
	std::string lName;
	std::string nName;
	std::string secret;
	std::string number;

	std::cout << "Enter first name: ";
	std::getline(std::cin, fName);
	std::cout << "Enter last name: ";
	std::getline(std::cin, lName);
	std::cout << "Enter nick name: ";
	std::getline(std::cin, nName);
	std::cout << "Enter phone number: ";
	std::getline(std::cin, number);
	std::cout << "Enter his darkest secret: ";
	std::getline(std::cin, secret); std::cout << std::endl;
	ContactsArray[index].setFirstName(fName);
	ContactsArray[index].setLastName(lName);
	ContactsArray[index].setNickName(nName);
	ContactsArray[index].setSecret(secret);
	ContactsArray[index].setPhoneNumber(number);
	ContactsArray[index].setEmptyFlag();
	std::cout << "Contact added" << std::endl;
}

void PhoneBook::showContactInfo(int index) {
	if (index <= 0 || index > 8 || ContactsArray[index - 1].getEmptyFlag() == 1) {
		std::cout << "There is no contact available with this index" << std::endl;
		return ;
	}
	std::cout << "Contact #" << index << std::endl;
	std::cout << "First name: ";
	std::cout << ContactsArray[index - 1].getFirstName() << std::endl;
	std::cout << "Last name: ";
	std::cout << ContactsArray[index - 1].getLastName() << std::endl;
	std::cout << "Nickname: ";
	std::cout << ContactsArray[index - 1].getNickName() << std::endl;
	std::cout << "Phone number: ";
	std::cout << ContactsArray[index - 1].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: ";
	std::cout << ContactsArray[index - 1].getSecret() << std::endl;
	return ;
}
