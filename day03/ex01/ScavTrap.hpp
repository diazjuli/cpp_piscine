/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 19:55:30 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/24 20:10:27 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <string>
#include <iostream>

class ScavTrap {
	
	public:
	
		//constructors
		ScavTrap(void);
		ScavTrap(ScavTrap const & src);
		ScavTrap(std::string name);
		~ScavTrap(void);

		//operator overloads
		ScavTrap  & operator=(ScavTrap const & src);
		
		 //attack function
		unsigned int	rangedAttack(std::string const & target);
		unsigned int	meleeAttack(std::string const & target) const;
		
		//damage functions
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		
		//get functions
		std::string		getName(void) const;

		//other
		void			challengeNewcomer(void) const;

	private:

		//member attributes
		unsigned int	_hitPoints;
		unsigned int	_maxHitPoints;
		unsigned int	_energyPoints;
		unsigned int	_maxEnergyPoints;
		unsigned int	_level;
		std::string		_name;
		unsigned int	_meleeAttackDamage;
		unsigned int	_rangedAttackDamage;
		unsigned int	_armoredDamageReduction;
};

#endif
