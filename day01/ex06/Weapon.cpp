/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 21:28:22 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/23 21:28:39 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {
    return;
}

Weapon::~Weapon(void) {
    return;
}

const std::string & Weapon::getType(void) const {
    return this->_type;
}

void Weapon::setType(std::string type) {
    this->_type = type;
}