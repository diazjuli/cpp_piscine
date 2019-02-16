/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 12:45:13 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/23 13:02:00 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(void)
{
	Zombie stackZombie("Stacky", "stack");
	ZombieEvent event;
	Zombie* heapZombie;

	stackZombie.announce();

	event.setZombieType("heap");
	
	heapZombie = event.newZombie("Hippy");
	heapZombie->announce();
	
	event.setZombieType("stack random");
	std::cout << "Creating two random chump zombies:" << std::endl;
	event.randomChump();
	event.randomChump();
	
	std::cout << "Deleting " << heapZombie->getName() << std::endl;
	delete heapZombie;

	return (0);
}
