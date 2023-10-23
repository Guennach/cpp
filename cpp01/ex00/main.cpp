/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:04:32 by gothmane          #+#    #+#             */
/*   Updated: 2023/10/21 10:16:18 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie s;
	
	s.setName("AYAC");
	Zombie *a = s.newZombie("telha");
	a->randomChump("ANAA");
	a->announce();
	delete a;
}