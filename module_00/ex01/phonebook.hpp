#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include "contacts.hpp"

# define WELCOME_MSG "Hi! This is your personal copy of Awesome Crappy Phonebook."
# define CMD_MSG "Available commands: ADD, SEARCH, EXIT"

// class Contact;

class PhoneBook {

public:
	Contact ContactsArray[8];
	void displayContacts();
	void addNewContact(int index);
	void showContactInfo(int index);
};

#endif
