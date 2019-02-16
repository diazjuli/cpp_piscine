/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 20:56:56 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/22 21:17:46 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name, int age) {
	this->name = name;
	this->age = age;
	std::cout << "A pony has been created!" << std::endl;
}

Pony::~Pony(void) {
	std::cout << "Deconstructing Pony" << std::endl;
	return ;
}

int	Pony::getAge(void) const {
	return (this->age);
}

std::string Pony::getName(void) const {
	return (this->name);
}
