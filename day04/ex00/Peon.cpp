/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 23:06:49 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/25 23:10:43 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(void) : Victim("default"){
	std::cout << "Zog zog." << std::endl;
	return;
}

Peon::Peon(std::string name) : Victim(name) {
	std::cout << "Zog zog." << std::endl;
	return;
}

Peon::Peon(Peon const & src) : Victim(src) {
	std::cout << "Zog zog." << std::endl;
	*this = src;
	return;
}

Peon::~Peon(void) {
	std::cout << "Bleuark..." << std::endl;
	return;
}

Peon & Peon::operator=(Peon const & rhs) {
	this->_name = rhs.getName();
	return (*this);
}

void Peon::getPolymorphed(void) const {
	std::cout << this->_name << " has been turned into a pink pony !" << std::endl;
}
