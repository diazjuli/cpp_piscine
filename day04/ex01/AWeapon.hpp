/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 23:46:41 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/25 23:57:22 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <string>
# include <iostream>

class AWeapon {
	
protected:
	
	std::string _name;
	int			_apcost;
	int			_damage;

public:

	//constructors
	AWeapon(void);
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(AWeapon const  & src);
	~AWeapon();

	//overloads
	AWeapon & operator=(AWeapon const & rhs);

	//getter fucntions
	std::string		getName(void) const;
	int				getAPCost(void) const;
	int 			getDamage(void) const;
	virtual void 	attack(void) const = 0;
};

#endif