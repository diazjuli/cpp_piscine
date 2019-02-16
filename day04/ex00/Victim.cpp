/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 22:49:33 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/25 23:00:41 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(void) : _name("default") {
	std::cout << "Some random victim called " << this->_name << " just popped !" << std::endl;
	return;
}

Victim::Victim(std::string name) : _name(name) {
	std::cout << "Some random victim called " << this->_name << " just popped !" << std::endl;
	return;
}

Victim::Victim(Victim const & src) {
	*this = src;
	std::cout << "Some random victim called " << this->_name << " just popped !" << std::endl;
	return;
}

Victim::~Victim(void) {
	std::cout << "Victim " << this->_name << " just died for no apparent reason !" << std::endl;
	return;
}

Victim & Victim::operator=(Victim const & rhs) {
	this->_name = rhs.getName();
	return (*this);
}

std::string Victim::getName(void) const {
	return this->_name;
}

std::string Victim::introduce(void) const {
	std::string result;
	result = "I'm " + this->_name + " and I like otters !";
	return result;
}

 void Victim::getPolymorphed(void) const {
	std::cout << this->_name << " has been turned into a cute little sheep !" << std::endl;
	return;	
}

std::ostream & operator<<(std::ostream & o, Victim & rhs) {
	o << rhs.introduce() << std::endl;
	return o;
}