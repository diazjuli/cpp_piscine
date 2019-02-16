/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 17:41:54 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/24 18:07:52 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <string>
#include <iostream>

class FragTrap {

	public:
		//constructors
		FragTrap(void);
		FragTrap(FragTrap const & src);
		FragTrap(std::string name);
		~FragTrap(void);
		//operator overloads
		FragTrap & operator=(FragTrap const & src);
		//attack function
		unsigned int	rangedAttack(std::string const & target);
		unsigned int	meleeAttack(std::string const & target) const;
		//damage functions
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		//get functions
		std::string		getName(void) const;

		//other
		unsigned int	vaulthunter_dot_exe(std::string const & target);

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
