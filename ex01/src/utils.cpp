/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstelken <tstelken@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 19:20:31 by tstelken          #+#    #+#             */
/*   Updated: 2026/07/19 20:59:39 by tstelken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"utils.hpp"

//gets the userinput. Ignores empty strings
void	getinput(std::string &uInput, const std::string &prompt){
	uInput.clear();
	while(uInput.empty()){
		std::cout << prompt;
		std::getline(std::cin, uInput);
		if(std::cin.eof()){
			std::cout << "Exit Program with Ctrl+D" << std::endl;
			exit(0);
		}
	}
}

bool	isNum(const std::string& s){
	for(size_t i = 0; i < s.length(); i++){
		if(s[i] < '0' || s[i] > '9')
			return false;
	}
	return true;
}