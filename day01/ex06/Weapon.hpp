/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 21:28:47 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/23 21:33:15 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon {
	
	public:

		Weapon(std::string type);
		~Weapon(void);
		
		const std::string & getType(void) const;
		void setType(std::string type);

	private:

		std::string _type;
};

#endif
