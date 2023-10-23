/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 18:19:52 by gothmane          #+#    #+#             */
/*   Updated: 2023/10/20 09:34:21 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main()
{
	std::string	cmd;
	PhoneBook	cn;
	int			idx;
	
	idx = 0;
	while (1)	
	{
		std::cout << "Welcome to the PhoneBOOK!" << std::endl;
		std::cout << "Give me a CMD between [ADD] | [SEARCH] and [EXIT]" << std::endl;	
		std::cin >> cmd;
		if (std::cin.eof() || cmd.empty())
		{
			std::cout << "\033[1;31m>>>>>>> Terminated <<<<<<<<<\033[0m\n\n" << std::endl;
			return (1);
		}
		if (!cmd.empty() && cmd == "ADD")
		{
			if (idx == 8)
				idx = 0;
			cn.AddContact(idx);
			idx++;
		}
		else if (!cmd.empty() && cmd == "SEARCH")
		{
			if (cn.getSize() != 0)
				cn.Search(idx);
			else
				std::cout << "\033[1;31mThere's Nothing in the table to search for !!! Please insert smtg\033[0m" << std::endl;
		}
		else if (cmd == "EXIT")
		{
			std::cout << "\033[1;31m>>>>>>> Terminated <<<<<<<<<\033[0m\n\n" << std::endl;
			return (0);
		}
	}
}