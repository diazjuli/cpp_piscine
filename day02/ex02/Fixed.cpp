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
    //std::cout << "Default constructor called" << std::endl;
    return;
}

Fixed::Fixed(Fixed const & src) {
    //std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

Fixed::Fixed(int const src) {
    //std::cout << "Int constructor called" << std::endl;
    this->_value = src << this->_fractional;
    return;
}

Fixed::Fixed(float const src) {
    //std::cout << "Copy constructor called" << std::endl;
    this->_value = roundf(src * (1 << this->_fractional));
    return;
}

Fixed::~Fixed(void) {
    //std::cout << "Destructor called" << std::endl;
    return;
}

float Fixed::toFloat(void) const {
    return ((float)this->_value / (1 << this->_fractional));
}

int Fixed::toInt(void) const {
    return (int)(this->_value >> this->_fractional);    
}

Fixed & Fixed::operator=(Fixed const & rhs) {
    //std::cout << "Assignation operator called" << std::endl;
    this->_value = rhs.getRawBits();
    return (*this);
}

bool Fixed::operator>(Fixed const & rhs) const{
    return (this->_value > rhs.getRawBits());
}

bool Fixed::operator<(Fixed const & rhs) const{
    return (this->_value < rhs.getRawBits());
}

bool Fixed::operator>=(Fixed const & rhs) const {
    return (this->_value >= rhs.getRawBits());
}

bool Fixed::operator<=(Fixed const & rhs) const {
    return (this->_value <= rhs.getRawBits());
}

bool Fixed::operator==(Fixed const & rhs) const {
    return (this->_value == rhs.getRawBits());
}

bool Fixed::operator!=(Fixed const & rhs) const{
    return (this->_value != rhs._value);
}


Fixed Fixed::operator+(Fixed const & rhs) const {
    return (Fixed(this->_value + rhs.getRawBits()));
}

Fixed Fixed::operator-(Fixed const & rhs) const {
    return (Fixed(this->_value - rhs.getRawBits()));
}

Fixed Fixed::operator*(Fixed const & rhs) const {
    return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed Fixed::operator/(Fixed const & rhs) const {
    if (rhs.getRawBits() != 0)
        return (Fixed(this->_value / rhs.getRawBits()));
    
    std::cout << "Division by 0 is not permitted" << std::endl;
    return (Fixed());
}

Fixed & Fixed::operator++(void) {
    this->_value += 1;
    return (*this);
}

Fixed & Fixed::operator++(int) {
    Fixed *temp = new Fixed(*this);
    this->_value += 1;
    return (*temp);
}

Fixed & Fixed::operator--(void) {
    this->_value -= 1;
    return (*this);
}

Fixed & Fixed::operator--(int) {
    Fixed *temp = new Fixed(*this);
    this->_value -= 1;
    return (*temp);
}

int Fixed::getRawBits(void) const {
    //std::cout << "getRawBits member function called" << std::endl;
    return this->_value;
}

void Fixed::setRawBits(int const raw) {
    this->_value = raw;
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs) {
    return (o << rhs.toFloat());
}

Fixed & Fixed::min(Fixed &a, Fixed &b) {
    if (a < b)
        return (a);
    return (b);
}

Fixed & Fixed::max(Fixed &a, Fixed &b) {
    if (a > b)
        return (a);
    return (b);
}

const Fixed & Fixed::min(const Fixed &a, const Fixed &b) {
    if (a < b)
        return (a);
    return (b);
}

const Fixed & Fixed::max(const Fixed &a, const Fixed &b) {
    if (a > b)
        return (a);
    return (b);
}

const int Fixed::_fractional = 8;