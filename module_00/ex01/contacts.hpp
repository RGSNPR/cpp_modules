#ifndef CONTACTS_HPP
#define CONTACTS_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Contact {

private:
	std::string		firstName;
	std::string		lastName;
	std::string		nickname;
	std::string 	darkestSecret;
	std::string		phoneNumber;
	int				isEmpty;

public:
	Contact();
	std::string	getFirstName() { return firstName; }
	std::string	getLastName() { return lastName; }
	std::string	getNickName() { return nickname; }
	std::string	getSecret() { return darkestSecret; }
	std::string	getPhoneNumber() { return phoneNumber; }
	int			getEmptyFlag() { return isEmpty; }

	void	setFirstName(std::string fName) { firstName = fName; }
	void	setLastName(std::string lName) { lastName = lName; }
	void	setNickName(std::string nick) { nickname = nick; }
	void	setSecret(std::string secret) { darkestSecret = secret; }
	void	setPhoneNumber(std::string number) { phoneNumber = number; }
	void	setEmptyFlag() { isEmpty = 0; }
};

#endif
