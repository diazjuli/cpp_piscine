/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 20:24:16 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/25 20:27:39 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include "NinjaTrap.hpp"
#include "FragTrap.hpp"

class SuperTrap : public NinjaTrap, public FragTrap {
	
public:
	//constructors
	SuperTrap(void);
	SuperTrap(std::string name);
	SuperTrap(SuperTrap & super);
	~SuperTrap(void);

	//operator overloads
	SuperTrap & operator=(SuperTrap const & src);

	//attacks
	unsigned int	rangedAttack(std::string const & target) const;
	unsigned int	meleeAttack(std::string const & target) const;

private:

};

#endif
