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
#include "SuperTrap.hpp"

int	main()
{
	unsigned int damage;

	SuperTrap super("SUPER BUU");
	SuperTrap copy("copy");
	copy = super;

	damage = super.rangedAttack(copy.getName());
	copy.takeDamage(damage);

	damage = super.meleeAttack(copy.getName());
	copy.takeDamage(damage);

	damage = super.ninjaShoebox((NinjaTrap)copy.getName());
	copy.takeDamage(damage);

	damage = super.vaulthunter_dot_exe(copy.getName());
	copy.takeDamage(damage);

	return 0;
}
