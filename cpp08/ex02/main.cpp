/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:34:38 by gothmane          #+#    #+#             */
/*   Updated: 2023/12/22 11:03:50 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
    MutantStack<int, std::deque<int> > mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    
    //Create another Stack
    MutantStack<std::string> rstack;

    //Push into stack
    rstack.push("mosyo telha");
    rstack.push("waaaaa");
    rstack.push("telha");
    rstack.push("ostora tel7a");
    rstack.push("tel7a nihaya");

    //Init iterators
    MutantStack<std::string>::iterator its = rstack.begin(); // get begin
    MutantStack<std::string>::iterator tail = rstack.end(); //  get end

    --tail; // dec as tail returns an iterator pointing one past the last element.
    
    //print begin and end
    std::cout << "############################" << std::endl;
    std::cout << *its << std::endl;
    std::cout << *tail << std::endl;
    std::cout << "############################" << std::endl;
    return 0;
}