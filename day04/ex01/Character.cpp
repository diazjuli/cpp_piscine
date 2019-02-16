/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 20:55:53 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/26 21:12:39 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : _name("default"), _AP(40), _weapon(NULL) {
	return;
}

Character::Character(std::string const & name) : _name(name), _AP(40), _weapon(NULL) {
	return;
}

Character::Character(Character const & src) {
	*this = src;
	return;
}

Character::~Character(void) {
	return;
}

Character & Character::operator=(Character const & rhs) {
	this->_name = rhs.getName();
	this->_AP = rhs.getAP();
	this->_weapon = rhs.getWeapon();
	return (*this);
}

void Character::recoverAP(void) {
	if (this->_AP <= 30)
		this->_AP += 10;
	else
		this->_AP = 40;
}

void Character::equip(AWeapon* weapon) {
	this->_weapon = weapon;
}

void Character::attack(Enemy *enemy) {
	
	if (enemy && this->_weapon) {
		if (this->_weapon->getAPCost() < this->_AP) {
			std::cout << this->_name << " attacks " << enemy->getType() <<
				" with a " << this->_weapon->getName() << std::endl;
			this->_weapon->attack();
			this->_AP -= this->_weapon->getAPCost();
			enemy->takeDamage(this->_weapon->getDamage());
			if (enemy->getHP() <= 0)
				delete enemy;
		}
	}
}

//getter functions
std::string Character::getName(void) const {
	return this->_name;
}

int	Character::getAP(void) const {
	return this->_AP;
} 

AWeapon* Character::getWeapon(void) const {
	return (this->_weapon);
}

std::ostream & operator<<(std::ostream & o, Character const & rhs) {
	o << rhs.getName() << " has " << rhs.getAP() << " AP and ";
	if (rhs.getWeapon())
		o << "wields a " << rhs.getWeapon()->getName() << std::endl;
	else
		o << "is unarmed" << std::endl;
	return o;
}
