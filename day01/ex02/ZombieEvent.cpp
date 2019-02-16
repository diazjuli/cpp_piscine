/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 12:18:03 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/23 12:45:04 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void)
{
	this->_type = "defaultZombie";
	return ;
}

ZombieEvent::~ZombieEvent(void)
{
	return;
}

void ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
}

std::string ZombieEvent::getType(void) const
{
	return this->_type;
}

Zombie* ZombieEvent::newZombie(std::string name) const
{
	Zombie* zombie = new Zombie(name, this->_type);
	return zombie;
}

void ZombieEvent::randomChump(void) const
{
	std::string names[10] = {"Juls", "Andres", "Janna", "Robyn",
		"Tawnya", "Jim", "Dwight", "Michael", "Sarah", "Chris"};
	int randIndex;

	randIndex = rand() % 10;
	Zombie chump(names[randIndex], this->_type);
	chump.announce();
}
