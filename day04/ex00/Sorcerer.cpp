/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 22:08:40 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/25 23:02:06 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void) : _name("default"), _title("default") {
	std::cout << this->_name << ", " << this->_title << ", is born !" << std::endl;
	return;
}

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title) {
	std::cout << this->_name << ", " << this->_title << ", is born !" << std::endl;
	return;
}

Sorcerer::Sorcerer(Sorcerer const & src) {
	*this = src;
	std::cout << this->_name << ", " << this->_title << ", is born !" << std::endl;
	return;
}

Sorcerer::~Sorcerer(void) {
	std::cout << this->_name << ", " << this->_title << ", is dead." <<
		" Consequences will never be the same ! " << std::endl;
	return;
}

Sorcerer & Sorcerer::operator=(Sorcerer const & rhs) {
	this->_name = rhs.getName();
	this->_title = rhs.getTitle();
	return (*this);
}

std::string Sorcerer::introduce(void) const {
	std::string result;
	result = "I am " + this->_name + ", " + this->_title + ", and I like ponies !";
	return result;
}

std::string Sorcerer::getName(void) const {
	return this->_name;
}

std::string Sorcerer::getTitle(void) const {
	return this->_title;
}

void Sorcerer::polymorph(Victim const & victim) const {
	victim.getPolymorphed();
	return;
}

std::ostream & operator<<(std::ostream & o, Sorcerer const & rhs) {
	o << rhs.introduce() << std::endl;
	return o;
}
