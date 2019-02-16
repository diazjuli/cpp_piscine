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

FragTrap::FragTrap(void) {
    std::cout << "FragTrap default constructor called" << std::endl;
    return;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    std::cout << "FragTrap constructor called" << std::endl;
    return;
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src){
    std::cout << "FragTrap copy constructor called" << std::endl;
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

unsigned int FragTrap::vaulthunter_dot_exe(std::string const & target) {
    std::string attacks[] = {"netflix Binge", "hangover",
        "sarcastic comment", "stumpy bark", "segfault"};
    unsigned int damage[] = {30, 50, 35, 40, 60};
    int index = rand() % 5;

    if (this->_energyPoints >= 25) {
        std::cout << "FR4G-TP uses vaulthunter attack. " << this->_name <<
        " attacks " << target << " with " << attacks[index] << ", causing "
        << damage[index] << " points of damage" << std::endl;
        this->_energyPoints -= 25;
        return (damage[index]);
    }
    std::cout << "FR4G-TP " << this->_name <<
        " does not have enough energy points for vaulthunter attack" << std::endl;
    return 0;
}