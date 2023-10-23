/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:49:06 by gothmane          #+#    #+#             */
/*   Updated: 2023/10/23 13:15:39 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int					fixedval;
		static const int	fractionp = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &value);
		Fixed& operator=(const Fixed &v);
		int getRawBits( void ) const;
		void setRawBits(int const raw);
};

#endif