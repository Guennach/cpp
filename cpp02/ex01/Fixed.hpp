/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:49:06 by gothmane          #+#    #+#             */
/*   Updated: 2023/12/08 12:44:44 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
class Fixed
{
	private:
		int					fixedval;
		static const int	fractionp = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &value);
		Fixed(const int val);
		Fixed(const float val);
		int getRawBits( void ) const;
		void setRawBits(int const raw);
		float toFloat( void ) const;
		int toInt( void ) const;
		Fixed& operator=(const Fixed &v);

};

std::ostream& operator<<(std::ostream& os,const Fixed& fixed);

#endif