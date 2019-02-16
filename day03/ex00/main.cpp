/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 18:20:30 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/24 19:34:57 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main()
{
	unsigned int damage;

	FragTrap a;
	FragTrap b("juls");
	FragTrap c(b);

	damage = a.rangedAttack(b.getName());
	b.takeDamage(damage);

	damage = b.meleeAttack(a.getName());
	a.takeDamage(damage);

	damage = a.vaulthunter_dot_exe(b.getName());
	b.takeDamage(damage);

	damage = b.vaulthunter_dot_exe(a.getName());
	a.takeDamage(damage);

	damage = a.vaulthunter_dot_exe(b.getName());
	b.takeDamage(damage);

	damage = b.vaulthunter_dot_exe(a.getName());
	a.takeDamage(damage);

	c = b;

	damage = c.vaulthunter_dot_exe(a.getName());
	a.takeDamage(damage);

	c.beRepaired(100);

	damage = c.vaulthunter_dot_exe(a.getName());
	a.takeDamage(damage);
	
	return (0);
}
