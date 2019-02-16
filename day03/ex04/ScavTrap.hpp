/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 19:55:30 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/24 20:10:27 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	
public:
	
	//constructors
	ScavTrap(void);
	ScavTrap(ScavTrap const & src);
	ScavTrap(std::string name);
	~ScavTrap(void);

	//operator overloads
	ScavTrap  & operator=(ScavTrap const & src);
		
	//other
	void			challengeNewcomer(void) const;

private:

};

#endif
