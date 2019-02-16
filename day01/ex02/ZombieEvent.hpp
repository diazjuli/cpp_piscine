/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 11:53:16 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/23 12:54:52 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"

class ZombieEvent {
	
	public:

		ZombieEvent(void);
		~ZombieEvent(void);

		void		setZombieType(std::string type);
		std::string	getType(void) const;
		Zombie*		newZombie(std::string name) const;
		void		randomChump(void) const;


	private:

		std::string _type;
};

#endif
