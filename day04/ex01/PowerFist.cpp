/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 19:58:13 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/26 20:02:32 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("PowerFist", 8, 50) {
	return;
}

PowerFist::PowerFist(PowerFist const & src) : AWeapon(src) {
	*this = src;
	return;
}

PowerFist::~PowerFist(void) {
	return;
}

PowerFist & PowerFist::operator=(PowerFist const & rhs) {
	this->_name = rhs.getName();
	this->_apcost = rhs.getAPCost();
	this->_damage = rhs.getDamage();
	return (*this);
}

void PowerFist::attack(void) const {
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
