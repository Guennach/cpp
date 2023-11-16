/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:12:46 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/16 15:49:53 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Base
{
    public:
        Base();
        Base(const Base &b);
        ~Base();
        Base& operator=(const Base &b);
        Base * generate(void);
        void identify(Base* p);
        void identify(Base& p);
};