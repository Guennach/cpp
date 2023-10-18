/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 15:35:26 by gothmane          #+#    #+#             */
/*   Updated: 2023/10/15 16:09:23 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>


std::string ft_toUpper_nd(char *str)
{
	std::string	upped = str;
	
	for (size_t i = 0; i < strlen(str); i++)
		upped[i] = std::toupper(str[i]);
	return (upped);
}

int main (int ac, char **av)
{
	if (ac >= 2)
	{
		for (int i = 1; i < ac; i++)
			std::cout << ft_toUpper_nd(av[i]);
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}