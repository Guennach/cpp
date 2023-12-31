/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:49:04 by gothmane          #+#    #+#             */
/*   Updated: 2023/10/26 13:29:58 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
	this->fixedval = 0;
};

Fixed::~Fixed(){
};

Fixed::Fixed(const Fixed &value){
	this->fixedval = value.getRawBits();
};

Fixed::Fixed(const int value){
	this->fixedval = value * 256;
};

Fixed& Fixed::operator=(const Fixed &v)
{
	this->fixedval = v.getRawBits();
	return (*this);
}

Fixed::Fixed(const float value){
	this->fixedval = roundf(value * 256);
};

std::ostream& operator<<(std::ostream& os,const Fixed& v)
{
	os << v.toFloat();
	return (os);
}

int Fixed::getRawBits( void ) const{
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

bool Fixed::operator<(Fixed &f1)
{
	return (this->fixedval < f1.getRawBits());
}

bool Fixed::operator>(Fixed &f1)
{
	return (this->fixedval > f1.getRawBits());
}

bool Fixed::operator>=(Fixed &f1)
{
	return (this->fixedval >= f1.getRawBits());
}

bool Fixed::operator<=(Fixed &f1)
{
	return (this->fixedval = f1.getRawBits());
}

bool Fixed::operator==(Fixed &f1)
{
	return (this->fixedval == f1.getRawBits());
}

bool Fixed::operator!=(Fixed &f1)
{
	return (this->fixedval != f1.getRawBits());
}

Fixed Fixed::operator+(Fixed &f1) const
{
	return (Fixed(this->toFloat() + f1.toFloat()));
}

Fixed Fixed::operator-(Fixed &f1) const
{
	return (Fixed(this->toFloat() - f1.toFloat()));
}

Fixed Fixed::operator*(const Fixed &f1) const {
    return Fixed(this->toFloat() * f1.toFloat());
}

Fixed Fixed::operator/(Fixed &f1) const
{
	return (Fixed(this->toFloat() / f1.toFloat()));
}

Fixed& Fixed::operator++() 
{
	this->fixedval++;
	return (*this);
}

Fixed& Fixed::operator--() 
{
	this->fixedval--;
	return (*this);
}

Fixed Fixed::operator++(int) {
    Fixed temp = *this;
    this->fixedval++;
    return temp;
}

Fixed Fixed::operator--(int) {
    Fixed temp = *this;
    this->fixedval--;
    return temp;
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.fixedval < b.fixedval)
		return (a);
	return (b);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.fixedval > b.fixedval)
		return (a);
	return (b);
}

const Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	if (a.fixedval < b.fixedval)
		return (a);
	return (b);
}

const Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	if (a.fixedval > b.fixedval)
		return (a);
	return (b);
}