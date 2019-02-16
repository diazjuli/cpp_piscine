/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 21:13:18 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/24 21:14:11 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _hitPoints(100), _maxHitPoints(100),
    _energyPoints(100), _maxEnergyPoints(100), _level(1), _name("default"),
    _meleeAttackDamage(30), _rangedAttackDamage(20), _armoredDamageReduction(5) {
    std::cout << "ClapTrap default constructor called" << std::endl;
    return;
}

ClapTrap::ClapTrap(std::string name) : _hitPoints(100), _maxHitPoints(100),
    _energyPoints(100), _maxEnergyPoints(100), _level(1), _name(name),
    _meleeAttackDamage(30), _rangedAttackDamage(20), _armoredDamageReduction(5) {
    std::cout << "ClapTrap Constructor called" << std::endl;
    return;
}

ClapTrap::ClapTrap(ClapTrap const & src) {
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = src;
    return;
}

ClapTrap::~ClapTrap(void) {
    std::cout << "ClapTrap destructor called" << std::endl;
    return;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs) {
     std::cout << "Clap Trap \"=\" Operator called" << std::endl;
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

unsigned int ClapTrap::rangedAttack(std::string const & target) {
    std::cout << "CLAP " << this->_name << " attacks " <<
        target << " at range, causing " << this->_rangedAttackDamage <<
        " points of damage" << std::endl;
    return this->_rangedAttackDamage;   
}

unsigned int ClapTrap::meleeAttack(std::string const & target) const {
    std::cout << "CLAP " << this->_name << " attacks " <<
        target << " at melee, causing " << this->_meleeAttackDamage <<
        " points of damage" << std::endl;
    return this->_meleeAttackDamage;   
}

void ClapTrap::takeDamage(unsigned int amount) {
    std::cout << "CLAP" << this->_name << " takes " <<
        amount << " points of damage" << std::endl;
    if (amount > this->_armoredDamageReduction) {
        if (amount >= this->_hitPoints + this->_armoredDamageReduction)
            this->_hitPoints = 0;
        else
            this->_hitPoints -= (amount - this->_armoredDamageReduction);
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    std::cout << "CLAP " << this->_name << " gets repaired,  " <<
        amount << " energy points are added" << std::endl;
    if (this->_energyPoints + amount <= this->_maxEnergyPoints)
        this->_energyPoints += amount;
    else
        this->_energyPoints = this->_maxEnergyPoints;
    if (this->_hitPoints + amount <= this->_maxHitPoints)
        this->_hitPoints += amount;
    else
        this->_hitPoints = this->_maxHitPoints;
}

//get functions
std::string ClapTrap::getName(void) const {
    return this->_name;
}