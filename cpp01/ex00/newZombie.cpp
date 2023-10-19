/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:04:35 by gothmane          #+#    #+#             */
/*   Updated: 2023/10/19 11:30:54 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie*	Zombie::newZombie(std::string name)
{
	Zombie *zm;
	
	zm = new Zombie(name);
	return (zm);
}
