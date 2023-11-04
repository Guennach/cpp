/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:07:28 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/01 13:35:16 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	
	public:
		ScavTrap(std::string name);
		~ScavTrap();
		ScavTrap();
		ScavTrap(const ScavTrap &st);
		//add copy ass...
		void guardGate();
		void attack(const std::string& target);
		ScavTrap& operator=(const ScavTrap &ct);
};

#endif