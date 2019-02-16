/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 17:41:54 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/24 18:07:52 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {

public:
	//constructors
	FragTrap(void);
	FragTrap(FragTrap const & src);
	FragTrap(std::string name);
	~FragTrap(void);

	//operator overloads
	FragTrap & operator=(FragTrap const & src);

	//other
	unsigned int	vaulthunter_dot_exe(std::string const & target);

private:
		
};

#endif
