/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 18:24:33 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/23 18:58:28 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {
	this->setAddress();
	return;
}

Brain::~Brain(void) {
	return;
}

void Brain::setAddress(void) {
	std::stringstream  result;
	
	result << this;
	this->_address = result.str();
}

std::string Brain::identify(void) const {
	return this->_address;
}
