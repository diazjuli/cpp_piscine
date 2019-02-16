/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 16:05:22 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/25 16:05:33 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void) : ClapTrap() {
    std::cout << "NinjaTrap default constructor called" << std::endl;
    this->_hitPoints = 60;
    this->_maxHitPoints = 60;
    this->_energyPoints = 120;
    this->_maxEnergyPoints = 120;
    this->_meleeAttackDamage = 60;
    this->_rangedAttackDamage = 5;
    this->_armoredDamageReduction = 0;
    return;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name) {
    std::cout << "NinjaTrap constructor called" << std::endl;
    this->_hitPoints = 60;
    this->_maxHitPoints = 60;
    this->_energyPoints = 120;
    this->_maxEnergyPoints = 120;
    this->_meleeAttackDamage = 60;
    this->_rangedAttackDamage = 5;
    this->_armoredDamageReduction = 0;
    return;
}

NinjaTrap & NinjaTrap::operator=(NinjaTrap const & rhs) {
     std::cout << "Ninja Trap \"=\" Operator called" << std::endl;
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

NinjaTrap::NinjaTrap(NinjaTrap const & src) : ClapTrap(src) {
    std::cout << "NinjaTrap copy constructor called" << std::endl;
    *this = src;
    return;
}

NinjaTrap::~NinjaTrap(void) {
    std::cout << "NinjaTrap destructor called" << std::endl;
    return;
}

unsigned int  NinjaTrap::ninjaShoebox(NinjaTrap const & ninja) const {
    
    std::cout << this->getName() << " attacks " << ninja.getName() <<
        " with ninjaShoebox" << std::endl;
    std::cout << "Here's you shoebox:" << std::endl <<
        "______" << std::endl << "|    |" << std::endl <<
        "|    |" << std::endl << "|____|" << std::endl <<
        "That'll be 30 hitPoints " << ninja.getName() <<std::endl;
    return (30);
}

unsigned int NinjaTrap::ninjaShoebox(FragTrap & frag) const {
    std::cout << this->getName() << " attacks " << frag.getName() <<
        " with ninjaShoebox" << std::endl;
    std::cout << "You've fallen for my ninja shoebox.. good job " <<
        ", you attack yourself!" << std::endl;
    return frag.vaulthunter_dot_exe(frag.getName());
}

unsigned int NinjaTrap::ninjaShoebox(ScavTrap const & scav) const {
    std::cout << this->getName() << " attacks " << scav.getName() <<
        " with ninjaShoebox" << std::endl;
    std::cout << "I challenege you to your own duel! " << std::endl;
    scav.challengeNewcomer();
    std::cout << "False! that's 40 hitpoints" << std::endl;
    return (40);
};

unsigned int NinjaTrap::ninjaShoebox(ClapTrap const & clap) const {
    std::cout << this->getName() << " attacks " << clap.getName() <<
        " with ninjaShoebox" << std::endl;
    std::cout << "Here's you shoebox:" << std::endl <<
        "______" << std::endl << "|    |" << std::endl <<
        "|    |" << std::endl << "|____|" << std::endl <<
        "That'll be 30 hitPoints" << clap.getName() << std::endl;
    return (30);
}
