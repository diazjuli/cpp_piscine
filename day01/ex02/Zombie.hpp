/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 11:29:23 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/23 12:55:03 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie {
	
	public:

		Zombie(std::string name, std::string type);
		~Zombie(void);

		void 		announce(void) const;
		std::string	getType(void) const;
		std::string	getName(void) const;

	private:

		std::string _type;
		std::string _name;

};

#endif
