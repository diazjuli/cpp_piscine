/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 17:41:31 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/24 18:08:01 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : _hitPoints(100), _maxHitPoints(100),
    _energyPoints(100), _maxEnergyPoints(100), _level(1), _name("default"),
    _meleeAttackDamage(30), _rangedAttackDamage(20), _armoredDamageReduction(5) {
    std::cout << "Default constructor called" << std::endl;
    return;
}

FragTrap::FragTrap(std::string name) : _hitPoints(100), _maxHitPoints(100),
    _energyPoints(100), _maxEnergyPoints(100), _level(1), _name(name),
    _meleeAttackDamage(30), _rangedAttackDamage(20), _armoredDamageReduction(5) {
    std::cout << "Constructor called" << std::endl;
    return;
}

FragTrap::FragTrap(FragTrap const & src) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

FragTrap::~FragTrap(void) {
    std::cout << "Destructor called" << std::endl;
    return;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs) {
     std::cout << "\"=\" Operator called" << std::endl;
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

unsigned int FragTrap::rangedAttack(std::string const & target) {
    std::cout << "FR4G-TP " << this->_name << " attacks " <<
        target << " at range, causing " << this->_rangedAttackDamage <<
        " points of damage" << std::endl;
    return this->_rangedAttackDamage;   
}

unsigned int FragTrap::meleeAttack(std::string const & target) const {
    std::cout << "FR4G-TP " << this->_name << " attacks " <<
        target << " at melee, causing " << this->_meleeAttackDamage <<
        " points of damage" << std::endl;
    return this->_meleeAttackDamage;   
}

void FragTrap::takeDamage(unsigned int amount) {
    std::cout << "FR4G-TP " << this->_name << " takes " <<
        amount << " points of damage" << std::endl;
    if (amount > this->_armoredDamageReduction) {
        if (amount >= this->_hitPoints + this->_armoredDamageReduction)
            this->_hitPoints = 0;
        else
            this->_hitPoints -= (amount - this->_armoredDamageReduction);
    }
}

void FragTrap::beRepaired(unsigned int amount) {
    std::cout << "FR4G-TP " << this->_name << " gets repaired,  " <<
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
std::string FragTrap::getName(void) const {
    return this->_name;
}

unsigned int FragTrap::vaulthunter_dot_exe(std::string const & target) {
    std::string attacks[] = {"netflix Binge", "hangover",
        "sarcastic comment", "stumpy bark", "segfault"};
    unsigned int damage[] = {30, 50, 35, 40, 60};
    int index = rand() % 5;

    if (this->_energyPoints >= 25) {
        std::cout << "FR4G-TP " << this->_name << " attacks " <<
           target << " with "<< attacks[index] << ", causing " << damage[index]
           << " points of damage" << std::endl;
        this->_energyPoints -= 25;
        return (damage[index]);
    }
    std::cout << "FR4G-TP " << this->_name <<
        " does not have enough energy points for this attack" << std::endl;
    return 0;
}