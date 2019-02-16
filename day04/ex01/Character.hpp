/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 20:46:49 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/26 21:12:41 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "AWeapon.hpp"
#include "Enemy.hpp"
#include <string>
#include <iostream>

class Character {
	
private:

	std::string	_name;
	int			_AP;
	AWeapon		*_weapon;

public:

	//constructors
	Character(void);
	Character(std::string const & name);
	Character(Character const & src);
	~Character();

	//operator overloads
	Character & operator=(Character const & rhs);

	void		recoverAP(void);
	void		equip(AWeapon *weapon);
	void 		attack(Enemy *enemy);

	//getter functions
	std::string	getName(void) const;
	int			getAP(void) const;
	AWeapon		*getWeapon(void) const;
};

std::ostream & operator<<(std::ostream & o, Character const & rhs);

#endif
