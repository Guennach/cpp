/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:49:06 by gothmane          #+#    #+#             */
/*   Updated: 2023/10/25 13:55:59 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
class Fixed
{
private:
	int fixedval;
	static const int fractionp = 8;

public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &value);
	Fixed(const int val);
	Fixed(const float val);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
	static 	const Fixed& min(const Fixed &a, const Fixed &b);
	static	const Fixed& max(const Fixed &a, const Fixed &b);
	static	const Fixed& min(Fixed &a, Fixed &b);
	static	const Fixed& max(Fixed &a, Fixed &b);
	bool operator<(Fixed &f1);
	bool operator>(Fixed &f1);
	bool operator>=(Fixed &f1);
	bool operator<=(Fixed &f1);
	bool operator!=(Fixed &f1);
	bool operator==(Fixed &f1);
	Fixed operator++(int);
	Fixed operator--(int);
	Fixed& operator++();
	Fixed& operator--();
	Fixed operator+(Fixed &f1) const;
	Fixed operator/(Fixed &f1) const;
	Fixed operator-(Fixed &f1) const;
	Fixed operator*(const Fixed &f1) const;
};

std::ostream& operator<<(std::ostream& os,const Fixed& fixed);

#endif