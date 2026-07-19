/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstelken <tstelken@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 17:21:25 by tstelken          #+#    #+#             */
/*   Updated: 2026/07/19 21:18:43 by tstelken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include<string>

class Contact{
	private:
		std::string	_info[5];

	public:
		const std::string	(&getContact(void) const)[5];
		void				setContact(const std::string (&contactInfo)[5]);
};

#endif