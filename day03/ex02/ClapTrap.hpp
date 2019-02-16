/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 21:14:18 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/24 21:15:44 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap {

public:

	//constructors
	ClapTrap(void);
	ClapTrap(ClapTrap const & src);
	ClapTrap(std::string name);
	~ClapTrap(void);

	//operator overloads
	ClapTrap & operator=(ClapTrap const & src);

	//attack function
	unsigned int	rangedAttack(std::string const & target);
	unsigned int	meleeAttack(std::string const & target) const;

	//damage functions
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);

	//get functions
	std::string		getName(void) const;
	
protected:

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

private:
};

#endif
