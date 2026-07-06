/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstelken <tstelken@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 15:41:42 by tstelken          #+#    #+#             */
/*   Updated: 2026/07/06 15:46:05 by tstelken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBookClass.hpp"

PhoneBook::PhoneBook(void){
	std::cout << "Constructor called" << std::endl;
	return;
}

PhoneBook::~PhoneBook(void){
	std::cout << "Destructor called" << std::endl;
	return;
}
