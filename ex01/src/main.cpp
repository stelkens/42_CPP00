/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstelken <tstelken@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 18:28:23 by tstelken          #+#    #+#             */
/*   Updated: 2026/07/20 11:34:17 by tstelken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "utils.hpp"
#include <iostream>
#include <string>

int main(void){
	PhoneBook	phonebook;
	bool		run;
	std::string	uInput;
	
	run = true;
	std::cout << "Welcome to your new Phonebook.\n";
	while (run){
		std::cout << "Please enter:\n\t'ADD' to add contacts.\n\t'SEARCH' to display your contacts\n\t'EXIT' to close the Phonebook.\n";
		if (!getinput(uInput, "$> "))
			return 1;
		if(!uInput.compare("ADD")){
			if (!phonebook.setContact())
				return 1;
		}
		else if(!uInput.compare("SEARCH")){
			if (phonebook.listContacts()){
				if (!phonebook.showEntry())
					return 1;
			}
		}
		else if(!uInput.compare("EXIT")){
			std::cout << "Exit Phonebook. Phonebook delete\n";
			run = false;
		}
		else{
			std::cout << "\t***Wrong input***\n\n";
		}
	}
	return (0);
}