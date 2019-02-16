/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 16:35:28 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/23 16:49:30 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N) : _num(N)
{
	std::cout << "Allocating " << N << " zombies" << std::endl;
	this->_zombies = new Zombie[N];

	std::string names[10] = {"Juls", "Andres", "Janna", "Robyn",
		"Tawnya", "Jim", "Dwight", "Michael", "Sarah", "Chris"};
	int randIndex;

	for (int i = 0; i < N; i++) {
		randIndex = rand() % 10;
		this->_zombies[i].setName(names[randIndex]);
		this->_zombies[i].setType("horde zombie");
	}
}

ZombieHorde::~ZombieHorde(void){
	std::cout << "Deleting zombies" << std::endl;
	delete [] this->_zombies;
	return;
}

void ZombieHorde::announce(void) const {
	for (int i = 0; i < this->_num; i++) {
		this->_zombies[i].announce();
	}
}
