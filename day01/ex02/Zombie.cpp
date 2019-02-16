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

Zombie::Zombie(std::string name, std::string type)
{
	this->_name = name;
	this->_type = type;
	std::cout << "New Zombie was born: " << this->_name <<std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Killed Zombie: " << this->_name <<std::endl;
	return;
}

void Zombie::announce(void) const
{
	std::cout << "<" << this->_name << " " << "(" << this->_type
		<< ")> Braiiiiiiinnnssss..." << std::endl;
}

std::string Zombie::getType(void) const
{
	return this->_type;
}

std::string Zombie::getName(void) const
{
	return this->_name;
}
