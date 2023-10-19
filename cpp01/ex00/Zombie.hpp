/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:04:42 by gothmane          #+#    #+#             */
/*   Updated: 2023/10/19 11:20:19 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {

	private:
		std::string name;
	public:
		void announce(void);
		std::string getName();
		void setName(std::string name);
		Zombie();
		Zombie(std::string name);
		~Zombie();
		Zombie*	newZombie(std::string name);
		void randomChump(std::string name);
};


#endif 