/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 20:43:01 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/26 20:46:15 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"
#include "Enemy.hpp"

RadScorpion::RadScorpion(void) : Enemy(80, "RadScorpion") {
	std::cout << "* click click click *" << std::endl;
	return;
}

RadScorpion::RadScorpion(RadScorpion const & src) : Enemy(src) {
	std::cout << "* click click click *" << std::endl;
	return;
}

RadScorpion::~RadScorpion(void) {
	std::cout << "* SPROTCH *" << std::endl;
	return;
}

RadScorpion & RadScorpion::operator=(RadScorpion const & rhs) {
	this->_hitPoints = rhs.getHP();
	this->_type = rhs.getType();
	return (*this);
}
