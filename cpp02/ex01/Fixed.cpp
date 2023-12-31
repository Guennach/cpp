/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:49:04 by gothmane          #+#    #+#             */
/*   Updated: 2023/10/23 14:36:05 by gothmane         ###   ########.fr       */
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

Fixed::Fixed(const int value){
	std::cout << "Int constructor called" << std::endl;
	this->fixedval = value * (1 << this->fractionp);
};

Fixed::Fixed(const float value){
	std::cout << "Float constructor called" << std::endl;
	this->fixedval = roundf(value * (1 << this->fractionp));
};

std::ostream& operator<<(std::ostream& os,const Fixed& v)
{
	os << v.toFloat();
	return (os);
}

int Fixed::getRawBits( void ) const{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixedval);
};

void Fixed::setRawBits(int const raw)
{
	this->fixedval = raw;
}

float Fixed::toFloat( void ) const {
	return (this->fixedval / 256.0f);
}

int Fixed::toInt( void ) const {
	return (this->fixedval / 256);
}