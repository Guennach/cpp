/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 15:29:23 by gothmane          #+#    #+#             */
/*   Updated: 2023/12/21 14:22:02 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <exception>
#include <cstdlib> // for rand

int main()
{
    // long = 14
    // short = 2
    try
    {
        //Span object with 5
        Span sp = Span(1); // 6 - 3 - 17 - 9 - 11
        //3  14  8  2
        //Pushing the numbers to the vector
        sp.addNumber(6);
        // sp.addNumber(3);
        // sp.addNumber(17);
        // sp.addNumber(9);
        // sp.addNumber(11);
        
        // To test this exception remove the comment in this chunk of code

        // sp.addNumber(11);
        // sp.addNumber(11);
        // sp.addNumber(11);
        // sp.addNumber(11);

        
        //Automatisation of the addNumber function
        
        // std::vector<int> rv(10000);
        // std::vector<int>::iterator begin = rv.begin();
        // std::vector<int>::iterator end = rv.end();

        // for (int i = 0; i < 10000; i++)
        // {
        //     std::srand(i * 2);
        //     rv[i] = std::rand();
        // }
        // sp.addSeqNbr(begin, end);

        // for (size_t i = 0; i < sp.vr.size(); i++)
        // {
        //     std::cout << sp.vr[i] << std::endl;
        // }
        
        //Get longest and shortest span
        std::cout << "Shortest Span : " << sp.shortestSpan() << std::endl;
        std::cout << "Loongest Span : " << sp.longestSpan() << std::endl;
    }
    catch (std::exception &sr)
    {
        //Print the exception error
        std::cerr << sr.what() << std::endl;
    }

    return 0;
}