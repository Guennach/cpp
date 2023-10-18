/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 16:12:34 by gothmane          #+#    #+#             */
/*   Updated: 2023/10/16 13:23:29 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string.h>
#include <iostream>
#include "Contact.hpp"
#include <iomanip>
#include <cstring> 

class PhoneBook
{
	private:
			Contact list[8];
			int size;
	public:
			void setSize(int size);
			int getSize();
			PhoneBook();
			~PhoneBook();
			void AddContact(int idx);
			std::string printMessage(std::string message);
			void Search(int idx);
			void Exit();
};

#endif