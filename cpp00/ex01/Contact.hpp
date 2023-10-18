/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 16:12:41 by gothmane          #+#    #+#             */
/*   Updated: 2023/10/15 16:51:48 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
=> first name,
=> last name,
=> nickname,
=> phone number,
=> darkest secret.
A saved contact can’t have empty fields
*/

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>


class Contact
{
	private:
			std::string firstName;
			std::string lastName;
			std::string nickName;
			std::string phoneNumber;
			std::string darkSecret;
	
	public:
			std::string	getFirstName();
			std::string	getLastName();
			std::string	getNickName();
			std::string	getPhoneNumber();
			std::string	getDarkSecret();
			void		setFirstName(std::string);
			void		setLastName(std::string);
			void		setNickName(std::string);
			void		setPhoneNumber(std::string);
			void		setDarkSecret(std::string);
			Contact();
			~Contact();
};

#endif