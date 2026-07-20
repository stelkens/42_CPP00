/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstelken <tstelken@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 19:20:31 by tstelken          #+#    #+#             */
/*   Updated: 2026/07/20 13:22:14 by tstelken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"utils.hpp"

//checks if s contains only ASCII chars
static bool	onlyAsscii(const std::string& s){
	for (size_t i = 0; i < s.length(); i++){
		if (static_cast<unsigned char>(s[i]) >127)
			return false;
	}
	return true;
}

/*gets the userinput. Ignores empty strings, allows only ASCII characters
and stopps with Ctrl+D*/
bool	getinput(std::string &uInput, const std::string &prompt){
	uInput.clear();
	while(uInput.empty()){
		std::cout << prompt;
		std::getline(std::cin, uInput);
		if(std::cin.eof()){
			std::cout << "\nExit Program with Ctrl+D" << std::endl;
			return false;
		}
		if(!onlyAsscii(uInput)){
			std::cout << "Only ASCII characters allowed.\n";
			uInput.clear();
		}
	}
	return true;
}

//checks if all chars are numeric
bool	isNum(const std::string& s){
	for(size_t i = 0; i < s.length(); i++){
		if(s[i] < '0' || s[i] > '9')
			return false;
	}
	return true;
}

//truncates text if its longer than 10 chars
std::string	formatText(const std::string &s){
	if (s.length() > 10){
		return s.substr(0,9) + ".";
	}
	return s;
}

//atoi for only positive num
int		myPosAtoi(const std::string s){
	int result = 0;
	for (size_t i = 0; i < s.length(); i++){
		result = result * 10 + (s[i] - '0');
	}
	return result;
}

//checks if number in string is > size
bool	inRange(const std::string s, const int size){
	if (isNum(s) && myPosAtoi(s) < size)
		return true;
	return false;
}

