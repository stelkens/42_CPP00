/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstelken <tstelken@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 15:41:42 by tstelken          #+#    #+#             */
/*   Updated: 2026/07/19 21:19:43 by tstelken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "utils.hpp"

PhoneBook::PhoneBook(void):_nextIndex(0),_size(0){
	
}

const int&	PhoneBook::getSize(void) const{
	return (_size);
}

void		PhoneBook::setContact(void){
	std::string	contactInfo[5];
	
	getinput(contactInfo[firstName], "\tFirst name\t: ");
	getinput(contactInfo[lastName], "\tLast name\t: ");
	getinput(contactInfo[nickName], "\tNick name\t: ");
	getinput(contactInfo[phoneNumber], "\tPhone number\t: ");
	while (!isNum(contactInfo[phoneNumber])){
		std::cout << "Wrong input. Please enter only numbers.\n";
		getinput(contactInfo[phoneNumber], "\tPhone number\t: ");
	}
	getinput(contactInfo[darkestSecret], "\tDarkest secret\t: ");
	
	if (_nextIndex >= MAX_CONTACTS)
		_nextIndex = 0;
	this->_contacts[_nextIndex++].setContact(contactInfo);
	if (_size < MAX_CONTACTS)
		++_size;
	std::cout << "Contact saved.\n\n";
}

void		PhoneBook::listContacts(void){
	//here
}
