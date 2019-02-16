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

ScavTrap::ScavTrap(void) {
    std::cout << "Default ScavTrap created" << std::endl;
    this->_energyPoints = 50;
    this->_maxEnergyPoints = 50;
    this->_meleeAttackDamage = 20;
    this->_rangedAttackDamage = 15;
    this->_armoredDamageReduction = 3;
    return;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    std::cout << "ScavTrap constructor called" << std::endl;
    this->_energyPoints = 50;
    this->_maxEnergyPoints = 50;
    this->_meleeAttackDamage = 20;
    this->_rangedAttackDamage = 15;
    this->_armoredDamageReduction = 3;
    return;
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src){
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