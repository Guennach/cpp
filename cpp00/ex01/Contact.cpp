/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 16:12:43 by gothmane          #+#    #+#             */
/*   Updated: 2023/10/15 16:53:08 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(){}

Contact::~Contact(){}

std::string	Contact::getFirstName()
{
	return (this->firstName);
}

std::string	Contact::getLastName()
{
	return (this->lastName);
}

std::string	Contact::getNickName()
{
	return (this->nickName);
}

std::string	Contact::getDarkSecret()
{
	return (this->darkSecret);
}

std::string	Contact::getPhoneNumber()
{
	return (this->phoneNumber);
}


void	Contact::setFirstName(std::string fn)
{
	this->firstName = fn;
}

void	Contact::setLastName(std::string ln)
{
	this->lastName = ln;
}

void	Contact::setNickName(std::string nm)
{
	this->nickName = nm;
}

void	Contact::setDarkSecret(std::string ds)
{
	this->darkSecret = ds;
}

void	Contact::setPhoneNumber(std::string pn)
{
	this->phoneNumber = pn;
}