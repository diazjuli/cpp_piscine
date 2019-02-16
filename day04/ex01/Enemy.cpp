/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 20:14:46 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/26 20:20:28 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(void) : _hitPoints(10), _type("default") {
	return;
}

Enemy::Enemy(int hp, std::string const & type) :_hitPoints(hp), _type(type) {
	return;
}

Enemy::Enemy(Enemy const & src) {
	*this = src;
	return;
}

Enemy::~Enemy(void) {
	return;
}

Enemy & Enemy::operator=(Enemy const & rhs) {
	this->_hitPoints = rhs.getHP();
	this->_type = rhs.getType();
	return (*this);
}

std::string Enemy::getType(void) const {
	return this->_type;
}

int	Enemy::getHP(void) const {
	return this->_hitPoints;
}

void Enemy::takeDamage(int damage) {
	if (damage >= 0) {
		if (this->_hitPoints > damage)
			this->_hitPoints -= damage;
		else
			this->_hitPoints = 0;
	}
}
