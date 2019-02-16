/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 20:30:18 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/26 20:37:00 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant") {
	std::cout << "Gaaah. Me want smash heads" << std::endl;
	return;
}

SuperMutant::SuperMutant(SuperMutant const & src) : Enemy(src) {
	std::cout << "Gaaah. Me want smash heads" << std::endl;
	*this = src;
	return;
}

SuperMutant::~SuperMutant(void) {
	std::cout << "Aaargh" << std::endl;
	return;
}

SuperMutant & SuperMutant::operator=(SuperMutant const & rhs) {
	this->_hitPoints = rhs.getHP();
	this->_type = rhs.getType();
	return (*this);
}

void SuperMutant::takeDamage(int damage) {
	if (damage > 3)
	{
		damage -= 3;
		if (this->_hitPoints > damage)
			this->_hitPoints -= damage;
		else
			this->_hitPoints = 0;
	}
}
