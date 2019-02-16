/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 20:07:41 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/26 20:20:29 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <string>
#include <iostream>

class Enemy {

protected:

	int			_hitPoints;
	std::string	_type;

public:

	// constructors
	Enemy(int hp, std::string const & type);
	Enemy(Enemy const & src);
	virtual ~Enemy();

	// operator overloads
	Enemy & operator=(Enemy const & rhs);

	// getter functions
	std::string getType(void) const;
	int			getHP(void) const;

	virtual void takeDamage(int);

private:

	// constructor
	Enemy(void);
};

#endif
