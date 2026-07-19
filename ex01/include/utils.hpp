/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstelken <tstelken@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 19:22:33 by tstelken          #+#    #+#             */
/*   Updated: 2026/07/19 20:51:36 by tstelken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP

#include<string>
#include<iostream>
#include<cstdlib>


void	getinput(std::string &uInput, const std::string &prompt);
bool	isNum(const std::string& s);

#endif