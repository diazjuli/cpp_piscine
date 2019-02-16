/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 21:52:30 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/23 21:53:11 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <string>
#include "Weapon.hpp"
#include <iostream>

class HumanB {
	
	public:

		HumanB(std::string name);
		~HumanB(void);

		void attack(void) const;
		void setWeapon(Weapon &weapon);

	private:
			
		std::string _name;
		Weapon *_weapon;
};

#endif
