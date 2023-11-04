/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:49:04 by gothmane          #+#    #+#             */
/*   Updated: 2023/10/23 13:53:14 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	this->fixedval = 0;
};

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
};

Fixed::Fixed(const Fixed &value){
	std::cout << "Copy constructor called" << std::endl;
	this->fixedval = value.getRawBits();
};

Fixed& Fixed::operator=(const Fixed &v)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->fixedval = v.getRawBits();
	return (*this);
}

int Fixed::getRawBits( void ) const{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixedval);
};

void Fixed::setRawBits(int const raw)
{
	this->fixedval = raw;
}
