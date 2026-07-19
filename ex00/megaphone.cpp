/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstelken <tstelken@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 12:26:38 by tstelken          #+#    #+#             */
/*   Updated: 2026/07/07 16:08:38 by tstelken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<cctype>

/*toupper changes every lowkey letter to upperkey. All other chars stay the same*/
int main(int argc, char **argv)
{
	(void) argv;
	if(argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		for (int i = 1; i < argc; i++)
		{
			for (int j = 0; argv[i][j] != '\0'; j++)
			{
				char c = argv[i][j];
				std::cout << (char)std::toupper(static_cast<unsigned char> (c));
			}
		}
		std::cout << std::endl;
	}
	return 0;
}