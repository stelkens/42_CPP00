/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstelken <tstelken@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 20:11:18 by tstelken          #+#    #+#             */
/*   Updated: 2026/07/19 21:18:37 by tstelken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::setContact(const std::string (&contactInfo)[5]){
	for(int i = 0; i < 5; i++){
		_info[i] = contactInfo[i];
	}
}

const std::string	(&Contact::getContact(void) const)[5]{
	return _info;
}