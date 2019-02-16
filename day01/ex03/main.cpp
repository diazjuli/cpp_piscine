/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 17:38:50 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/23 17:43:10 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main(void) {
	ZombieHorde horde(10);

	horde.announce();
	return (0);
}
