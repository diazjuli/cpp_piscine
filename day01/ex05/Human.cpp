/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 18:40:56 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/23 18:58:26 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void) {
	return ;
}

Human::~Human(void) {
	return;
}

std::string Human::identify(void) const {
	return (this->_brain.identify());
}

Brain Human::getBrain(void) const {
	return (this->_brain);
}
