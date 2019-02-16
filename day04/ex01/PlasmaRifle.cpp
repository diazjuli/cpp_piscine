/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 19:38:57 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/26 19:39:07 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 5, 21) {
    return;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & src) : AWeapon(src) {
    *this = src;
    return;
}

PlasmaRifle::~PlasmaRifle(void) {
    return;
}

PlasmaRifle & PlasmaRifle::operator=(PlasmaRifle const & rhs) {
    this->_name = rhs.getName();
    this->_apcost = rhs.getAPCost();
    this->_damage = rhs.getDamage();
    return (*this);
}

void PlasmaRifle::attack(void) const {
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}