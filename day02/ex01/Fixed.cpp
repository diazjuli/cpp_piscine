/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 11:29:58 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/24 11:30:09 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0) {
    std::cout << "Default constructor called" << std::endl;
    return;
}

Fixed::Fixed(Fixed const & src) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

Fixed::Fixed(int const src) {
    std::cout << "Int constructor called" << std::endl;
    this->_value = src << this->_fractional;
    return;
}

Fixed::Fixed(float const src) {
    std::cout << "Copy constructor called" << std::endl;
    this->_value = roundf(src * (1 << this->_fractional));
    return;
}

Fixed::~Fixed(void) {
    std::cout << "Destructor called" << std::endl;
    return;
}

float Fixed::toFloat(void) const {
    return ((float)this->_value / (1 << this->_fractional));
}

int Fixed::toInt(void) const {
    return (int)(this->_value >> this->_fractional);    
}

Fixed & Fixed::operator=(Fixed const & rhs) {
    std::cout << "Assignation operator called" << std::endl;
    this->_value = rhs.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->_value;
}

void Fixed::setRawBits(int const raw) {
    this->_value = raw;
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs) {
    return (o << rhs.toFloat());
}

const int Fixed::_fractional = 8;