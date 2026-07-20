/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstelken <tstelken@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 15:41:42 by tstelken          #+#    #+#             */
/*   Updated: 2026/07/20 13:26:42 by tstelken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"
#include "utils.hpp"

PhoneBook::PhoneBook(void):_nextIndex(0),_size(0){
	
}

const int&	PhoneBook::getSize(void) const{
	return (_size);
}

/*Safes the user input in an array of strings. 
Checks if input of phonenumber is only nummeric.
Safes up to 8 contactes. If phonebook is full, it overrides oldes contact.*/
bool		PhoneBook::setContact(void){
	std::string	contactInfo[5];
	
	if (!getinput(contactInfo[firstName], "\tFirst name\t: "))
		return false;
	if (!getinput(contactInfo[lastName], "\tLast name\t: "))
		return false;
	if (!getinput(contactInfo[nickName], "\tNick name\t: "))
		return false;
	if (!getinput(contactInfo[phoneNumber], "\tPhone number\t: "))
		return false;

	while (!isNum(contactInfo[phoneNumber])){
		std::cout << "Wrong input. Please enter only numbers." << std::endl;
		if (!getinput(contactInfo[phoneNumber], "\tPhone number\t: "))
			return false;
	}
	
	if (!getinput(contactInfo[darkestSecret], "\tDarkest secret\t: "))
		return false;
	
	if (_nextIndex >= MAX_CONTACTS){
		_nextIndex = 0;
		std::cout << "\n\t***Phonebook is full. Oldes contact will be replaced***\n";
	}
	this->_contacts[_nextIndex++].setContact(contactInfo);
	if (_size < MAX_CONTACTS)
		++_size;
	std::cout << "\n\t***Contact saved.***\n\n";
	return true;
}

/*Displays the fist 4 fields of all contacts in a listformat.*/
bool		PhoneBook::listContacts(void){
	if (!_size){
		std::cout << "\t***No contactes saved.***\n\n";
		return false;
	}
	
	std::cout	<< "\n\n\t______________________________________\n"
				<< std::right
				<< std::setw(10) << "Index" << "|"
				<< std::setw(10) << "First Name" << "|"
				<< std::setw(10) << "Last Name" << "|"
				<< std::setw(10) << "Nickname" << "|\n";
	for (int i = 0; i < _size; i++){
		const std::string (&contact)[5] = this->_contacts[i].getContact();
		std::cout	<< std::right
					<< std::setw(10) << i << "|"
					<< std::setw(10) << formatText(contact[firstName]) << "|"
					<< std::setw(10) << formatText(contact[lastName]) << "|"
					<< std::setw(10) << formatText(contact[nickName]) << "|\n";
	}
	std::cout << "\t______________________________________" << std::endl;
	return true;
}

/*Asks user for an index. Index must be numeric and in the range of safed
contactes in phonebook. Displayes the data of contact at index.*/
bool		PhoneBook::showEntry(void){
	std::string	input;

	std::cout << "\n\nEnter index of the contact you want to see\n\n";
	if (!getinput(input, "\tIndex\t: "))
		return false;
	while (!inRange(input,_size)){
		std::cout	<< "Wrong input. Please enter only numbers from 0 to "
					<< _size -1 << "\n\n";
		if (!getinput(input, "\tIndex\t: "))
			return false;
	}
	int index = myPosAtoi(input);

	const std::string (&contact)[5] = this->_contacts[index].getContact();
	std::cout	<< "\n\n\t______________________________________\n"
				<< "\tFist Name:\t\t" << contact[firstName] << '\n'
				<< "\tLast Name:\t\t" << contact[lastName] << '\n'
				<< "\tNickname:\t\t" << contact[nickName] << '\n'
				<< "\tPhonenumber:\t\t" << contact[phoneNumber] << '\n'
				<< "\tDarkest secret:\t\t" << contact[darkestSecret] << '\n'
				<< "\t______________________________________\n" << std::endl;
	return true;
}