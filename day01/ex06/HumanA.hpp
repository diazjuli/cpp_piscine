/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 21:44:58 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/23 21:48:54 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <string>
#include "Weapon.hpp"
#include <iostream>

class HumanA {
	
	public:

		HumanA(std::string name, Weapon& weapon);
		~HumanA(void);

		void attack(void) const;

	private:
			
		std::string _name;
		Weapon & _weapon;
};

#endif
