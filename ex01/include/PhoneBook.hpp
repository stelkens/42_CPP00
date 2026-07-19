/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstelken <tstelken@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 15:41:47 by tstelken          #+#    #+#             */
/*   Updated: 2026/07/19 21:19:06 by tstelken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# define MAX_CONTACTS 8

#include"Contact.hpp"

class PhoneBook {
private:
	Contact _contacts[8];
	int		_nextIndex;
	int		_size;

	enum	Fields{
		firstName,
		lastName,
		nickName,
		phoneNumber,
		darkestSecret,
	};

public:
	PhoneBook(void);
	void		setContact(void);
	void		listContacts(void);
	//void		showEntry(std::string);
	const int&	getSize(void) const;
};

#endif