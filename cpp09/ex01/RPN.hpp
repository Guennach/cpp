/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:20:01 by gothmane          #+#    #+#             */
/*   Updated: 2023/12/05 16:21:49 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>

class RPN
{
    private:
        std::stack<int> st;
    public:
        RPN();
        ~RPN();
        RPN(const RPN &rp);
        RPN& operator=(const RPN& rp);
};