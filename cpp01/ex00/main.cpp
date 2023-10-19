/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:04:32 by gothmane          #+#    #+#             */
/*   Updated: 2023/10/19 12:13:12 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie s;
	
	Zombie *a = s.newZombie("telha");
	a->announce();
	a->randomChump("ANAA");
	delete a;
}