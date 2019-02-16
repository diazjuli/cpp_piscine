/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 23:53:04 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/25 23:57:20 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(void) : _name("default"), _apcost(0), _damage(0) {
	return;
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) :
		_name(name), _apcost(apcost), _damage(damage) {
	return;	
}

AWeapon::AWeapon(AWeapon const & src) {
	*this = src;
	return;
}

AWeapon::~AWeapon(void) {
	return;
}

AWeapon & AWeapon::operator=(AWeapon const & rhs) {
	this->_name = rhs.getName();
	this->_apcost = rhs.getAPCost();
	this->_damage = rhs.getDamage();
	return (*this);
}

std::string AWeapon::getName(void) const {
	return this->_name;
}

int	AWeapon::getAPCost(void) const {
	return this->_apcost;
}

int	AWeapon::getDamage(void) const {
	return this->_damage;
}
