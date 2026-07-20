/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstelken <tstelken@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 15:41:47 by tstelken          #+#    #+#             */
/*   Updated: 2026/07/20 11:33:42 by tstelken         ###   ########.fr       */
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
	bool		setContact(void);
	bool		listContacts(void);
	bool		showEntry(void);
	const int&	getSize(void) const;
};

#endif