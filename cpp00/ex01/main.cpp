/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 18:19:52 by gothmane          #+#    #+#             */
/*   Updated: 2023/10/15 19:38:47 by gothmane         ###   ########.fr       */
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
			return (1);
		if (!cmd.empty() && cmd == "ADD")
		{
			if (idx == 8)
				idx = 0;
			cn.AddContact(idx);
			idx++;
		}
		else if (!cmd.empty() && cmd == "SEARCH")
			cn.Search(idx);
		else if (cmd == "EXIT")
			return (0);
	}
}