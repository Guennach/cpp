/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 10:14:56 by gothmane          #+#    #+#             */
/*   Updated: 2023/10/23 12:09:38 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){};

Harl::~Harl(){};

void	Harl::debug(void)
{
	std::cout << "This is Debug" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "This is Info" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "This is Warning" << std::endl;
}


void	Harl::error(void)
{
	std::cout << "This is Error" << std::endl;
}


void	Harl::complain(std::string level)
{
	void (Harl::*collector[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	for (int i = 0; i < 4; i++)
		if (levels[i] == level)
			(this->*(collector[i]))();
}