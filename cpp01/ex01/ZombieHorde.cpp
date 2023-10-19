/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:47:45 by gothmane          #+#    #+#             */
/*   Updated: 2023/10/19 12:06:58 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie* Zombie::zombieHorde(int N, std::string name)
{
	int		i;
	Zombie *head = new Zombie[N];
	
	i = 0;
	for (i = 0; i < N; i++)
	{
		head[i].setName(name);
	}
	return (head);
}