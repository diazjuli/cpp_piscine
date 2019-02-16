/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 21:49:01 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/23 21:52:23 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) :
	_name(name), _weapon(weapon) {
	return ;
}

HumanA::~HumanA(void) {
	return;
}

void HumanA::attack(void) const {
	std::cout << this->_name << " attacks with his " <<
		this->_weapon.getType() << std::endl;
}
