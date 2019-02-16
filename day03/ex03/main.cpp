/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 18:20:30 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/25 16:37:27 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int	main()
{
	unsigned int damage;

	
	FragTrap frag("Frago");
	ScavTrap scav("scavvy");
	NinjaTrap ninja("ninja");
	NinjaTrap sam(ninja);

	damage = ninja.rangedAttack(scav.getName());
	scav.takeDamage(damage);

	damage = ninja.meleeAttack(frag.getName());
	frag.takeDamage(damage);

	damage = ninja.ninjaShoebox(scav);
	scav.takeDamage(damage);

	damage = ninja.ninjaShoebox(frag);
	frag.takeDamage(damage);

	damage = ninja.ninjaShoebox(sam);
	sam.takeDamage(damage);

	sam = ninja;

	return (0);
}
