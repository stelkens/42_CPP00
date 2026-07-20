/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstelken <tstelken@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 19:22:33 by tstelken          #+#    #+#             */
/*   Updated: 2026/07/20 13:13:46 by tstelken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP

#include<string>
#include<iostream>
#include<cstdlib>


bool		getinput(std::string &uInput, const std::string &prompt);
bool		isNum(const std::string& s);
std::string	formatText(const std::string &s);
int			myPosAtoi(const std::string s);
bool		inRange(const std::string s, const int size);

#endif