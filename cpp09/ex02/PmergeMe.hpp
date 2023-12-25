/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:17:48 by gothmane          #+#    #+#             */
/*   Updated: 2023/12/25 14:23:28 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

class PmergeMe
{
    public:
        PmergeMe();
        ~PmergeMe();
        PmergeMe& operator=(const PmergeMe& pm);
        PmergeMe(const PmergeMe& pm);
};