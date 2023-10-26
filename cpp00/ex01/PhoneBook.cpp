/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 16:12:32 by gothmane          #+#    #+#             */
/*   Updated: 2023/10/25 11:37:45 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <cstdlib>

PhoneBook::PhoneBook(){
	this->size = 0;
};

PhoneBook::~PhoneBook(){};


void PhoneBook::setSize(int s)
{
	this->size = s; 
}

int PhoneBook::getSize()
{
	return (this->size);
}

std::string PhoneBook::printMessage(std::string message)
{
	std::string inp;

	while (inp.empty())
	{
		std::cout << message << std::endl;
		std::getline(std::cin, inp);
		if (std::cin.eof())
		{
			std::cout << "\033[1;31m>>>>>>> Terminated <<<<<<<<<\033[0m\n\n" << std::endl;
			exit (1);
		}
	}
	return (inp);
}

void PhoneBook::AddContact(int idx)
{
	std::cin.ignore();
	this->list[idx].setFirstName(printMessage("Give me your First name :"));
	this->list[idx].setLastName(printMessage("Give me your Last name :"));
	this->list[idx].setNickName(printMessage("Give me your Nick name :"));
	this->list[idx].setPhoneNumber(printMessage("Give me your Phone Number :"));
	this->list[idx].setDarkSecret(printMessage("Give me your Dark Secret :"));
	if (this->size < 8)
		this->setSize(this->size + 1);
}

void PhoneBook::Exit()
{
	std::cout << "\033[1;31m>>>>>>> Terminated <<<<<<<<<\033[0m\n\n" << std::endl;
	exit(0);
}

std::string ft_trunc_nd_return(std::string str)
{
	std::string trunced;

	if (str.size() > 9)
	{
		trunced = str.substr(0, 9);
		trunced = trunced.append(".");
	}
	else
		return (str);
	return trunced;
}

void PhoneBook::Search(int idx)
{
	std::string input;
	int index = 0;
	
	(void)idx;
	std::cout << "Searching..." << std::endl;
	std::cout << "=============================================" << std::endl;
	std::cout << "|" << std::left << std::setw(10) << "INDEX" << "|"  << std::setw(10)
		 <<  "firstname |" << std::setw(10) <<  "lastname  |" << std::setw(10) <<  "Nickname  |"  << std::endl;
	std::cout << "=============================================" << std::endl;
	for (int i = 0; i < this->size; i++)
	{
		std::cout << std::right << "|" << std::setw(10) << (i + 1) << "|";
		std::cout << std::setw(10) <<  ft_trunc_nd_return(this->list[i].getFirstName()) << "|";
		std::cout << std::setw(10) << ft_trunc_nd_return(this->list[i].getLastName()) << "|";
		std::cout << std::setw(10) << ft_trunc_nd_return(this->list[i].getNickName()) << "|" << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
	}
	std::cout << "\n";
	std::cout << "Give me an index from 1 to " << this->size <<" in the contact" << std::endl;
	while (input.empty())
	{
		std::getline(std::cin, input);
		if (std::cin.eof())
		{
			std::cout << "\033[1;31m>>>>>>> Terminated <<<<<<<<<\033[0m\n\n" << std::endl;
			exit (1);
		}
	}
	index = std::atoi(input.c_str());
	index--;
	if (index != -1 && index < this->size)
	{
		std::cout << "Your First name is " << this->list[index].getFirstName() << std::endl;
		std::cout << "Your Last name is " << this->list[index].getLastName() << std::endl;
		std::cout << "Your Nick name is " << this->list[index].getNickName() << std::endl;
		std::cout << "Your Phone Number is " << this->list[index].getPhoneNumber() << std::endl;
		std::cout << "Your Dark Secret is " << this->list[index].getDarkSecret() << std::endl;
	}
	else
	{
		std::cout << "Wrong Index! Getting Reseted" << std::endl;
	}
}