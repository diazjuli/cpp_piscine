/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 20:18:04 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/24 20:18:06 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : _hitPoints(100), _maxHitPoints(100),
    _energyPoints(50), _maxEnergyPoints(50), _level(1), _name("default"),
    _meleeAttackDamage(20), _rangedAttackDamage(15), _armoredDamageReduction(3) {
    std::cout << "Default ScavTrap created" << std::endl;
    return;
}

ScavTrap::ScavTrap(std::string name) : _hitPoints(100), _maxHitPoints(100),
    _energyPoints(50), _maxEnergyPoints(50), _level(1), _name(name),
    _meleeAttackDamage(20), _rangedAttackDamage(15), _armoredDamageReduction(3) {
    std::cout << "ScavTrap constructor called" << std::endl;
    return;
}

ScavTrap::ScavTrap(ScavTrap const & src) {
    std::cout << "ScavTrap Copy constructor called" << std::endl;
    *this = src;
    return;
}

ScavTrap::~ScavTrap(void) {
    std::cout << "Scavtrap was destroyed :(" << std::endl;
    return;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs) {
     std::cout << "ScavTrap \"=\" operator overload used" << std::endl;
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

unsigned int ScavTrap::rangedAttack(std::string const & target) {
    std::cout << "SCAV " << this->_name << " attacks " <<
        target << " using range attack, causing " << this->_rangedAttackDamage <<
        " points of damage" << std::endl;
    return this->_rangedAttackDamage;   
}

unsigned int ScavTrap::meleeAttack(std::string const & target) const {
    std::cout << "SCAV " << this->_name << " attacks " <<
        target << " with melee, causing " << this->_meleeAttackDamage <<
        " points of damage" << std::endl;
    return this->_meleeAttackDamage;   
}

void ScavTrap::takeDamage(unsigned int amount) {
    std::cout << "SCAV HAS BEEN ATTACKED!!! " << this->_name << " takes " <<
        amount << " points of damage" << std::endl;
    if (amount > this->_armoredDamageReduction) {
        if (amount >= this->_hitPoints + this->_armoredDamageReduction)
            this->_hitPoints = 0;
        else
            this->_hitPoints -= (amount - this->_armoredDamageReduction);
    }
}

void ScavTrap::beRepaired(unsigned int amount) {
    std::cout << "SCAV " << this->_name << " gets repaired,  " <<
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
std::string ScavTrap::getName(void) const {
    return this->_name;
}

void ScavTrap::challengeNewcomer(void) const{
    std::string challenge[5] = {
        "Question! What type of bear is best?", 
        "Cinnamon challenge",
        "Pick a friend for a hot pepper challenge, Whoever eat the hottest pepper wins. The loser does the other's laundry",
        "Eat a Tide pod challenge!.... don't actually do this",
        "Pick your favourite stunt from jackass and do it"
    };
    int random = rand() % 5;

    std::cout << "Your challenge is: " << challenge[random] << std::endl;        
}