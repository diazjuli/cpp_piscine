/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 20:27:47 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/25 20:27:59 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void) {
    std::cout << "SuperTrap default constructor called" << std::endl;
    this->_hitPoints = 100;
    this->_maxHitPoints = 100;
    this->_rangedAttackDamage = 20;
    this->_armoredDamageReduction = 5;
    return;
}

SuperTrap::SuperTrap(std::string name) : ClapTrap(name), NinjaTrap(name), FragTrap(name) {
    std::cout << "SuperTrap constructor called" << std::endl;
    this->_hitPoints = 100;
    this->_maxHitPoints = 100;
    this->_rangedAttackDamage = 20;
    this->_armoredDamageReduction = 5;
    return;
}

SuperTrap::SuperTrap(SuperTrap & src) : ClapTrap(src), NinjaTrap(src), FragTrap(src) {
    std::cout << "SuperTrap copy constructor called" << std::endl;
    *this = src;
    return;
}

SuperTrap::~SuperTrap(void) {
    std::cout << "SuperTrap destructor called" << std::endl;
    return;
}

SuperTrap & SuperTrap::operator=(SuperTrap const & rhs) {
     std::cout << "SuperTrap \"=\" Operator called" << std::endl;
    this->_hitPoints = rhs._hitPoints;
    this->_maxHitPoints = rhs._maxHitPoints;
    this->_energyPoints = rhs._energyPoints;
    this->_maxEnergyPoints = rhs._maxEnergyPoints;
    this->_level = rhs._level;
    this->_name = rhs._name;
    this->_meleeAttackDamage = rhs._meleeAttackDamage;
    this->_rangedAttackDamage = rhs._rangedAttackDamage;
    this->_armoredDamageReduction = rhs._armoredDamageReduction;
    return (*this);
}

unsigned int SuperTrap::rangedAttack(std::string const & target) const {
    return this->FragTrap::rangedAttack(target);
}

unsigned int SuperTrap::meleeAttack(std::string const & target) const {
    return this->NinjaTrap::meleeAttack(target);
}