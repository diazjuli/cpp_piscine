/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 12:08:29 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/23 12:55:00 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) : _type("default"), _name("default") {
	return;
}

Zombie::Zombie(std::string name, std::string type)
{
	this->_name = name;
	this->_type = type;
}

Zombie::~Zombie(void) {
	std::cout << "Killed Zombie: " << this->_name <<std::endl;
	return;
}

void Zombie::announce(void) const {
	std::cout << "<" << this->_name << " " << "(" << this->_type
		<< ")> Braiiiiiiinnnssss..." << std::endl;
}

void	Zombie::setName(std::string name) {
	this->_name = name;
}

void	Zombie::setType(std::string type) {
	this->_type = type;
}
std::string Zombie::getType(void) const {
	return this->_type;
}

std::string Zombie::getName(void) const {
	return this->_name;
}
