#include "contacts.hpp"
#include "phonebook.hpp"

int checkDigits(const char *str) {

	while (*str) {
		if (isdigit(*str) == 0)
			return (0);
		str++;
	}
	return (1);
}

int main(void) {

	std::string input;
	PhoneBook phoneBook;
	int contactNum = 0;
	char d_input[1024];

	std::cout << WELCOME_MSG << std::endl;
	std::cout << CMD_MSG << std::endl;
	std::cout << "Type the command: ";
	while (1) {
		if (std::getline(std::cin, input) == 0) {
			std::cout << "\nNULL received\n";
			break ;
		}
		if (input.compare("EXIT") == 0)
			break ;
		else if (input.compare("ADD") == 0) {
			phoneBook.addNewContact(contactNum);
			contactNum++;
			if (contactNum == 8)
				contactNum = 0;
		} else if (input.compare("SEARCH") == 0) {
			phoneBook.displayContacts();
			std::cout << "Enter number of contact to display his info: ";
			std::getline(std::cin, input);
			strcpy(d_input, input.c_str());
			if (!checkDigits(d_input)) {
				std::cout << "Contact index must be an integer\n";
			} else
				phoneBook.showContactInfo(std::atoi(d_input));
		} else {
			std::cout << "Command was not recognized :(";
		}
		std::cout << std::endl;
		std::cout << "Type the command: ";
	}
	std::cout << "Exiting.." << std::endl;
	return (0);
}
