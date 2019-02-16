/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 18:20:30 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/25 15:32:11 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	unsigned int damage;

	
	ClapTrap clap("clapper");
	FragTrap frag("Frago");
	ScavTrap scav("scavvy");
	ScavTrap copy_scav(scav);

	damage = frag.rangedAttack(scav.getName());
	scav.takeDamage(damage);

	damage = scav.meleeAttack(frag.getName());
	frag.takeDamage(damage);

	damage = frag.vaulthunter_dot_exe(scav.getName());
	scav.takeDamage(damage);

	scav = scav;
	scav.challengeNewcomer();

	return (0);
}
