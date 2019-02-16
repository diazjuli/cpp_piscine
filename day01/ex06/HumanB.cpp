/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 21:53:21 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/23 22:00:06 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) {
	return;
}

HumanB::~HumanB(void) {
	return;
}

void HumanB::attack(void) const {
	if (this->_weapon)
		std::cout << this->_name << " attacks with his " <<
			this->_weapon->getType() << std::endl;
	else
		std::cout << "No weapon set for " << this->_name << std::endl;
}

void HumanB::setWeapon(Weapon& weapon) {
	this->_weapon = &weapon;
}
