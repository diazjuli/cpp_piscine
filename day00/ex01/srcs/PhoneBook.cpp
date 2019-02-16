/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 17:21:20 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/22 17:36:00 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::setVariables(std::string buff[]) {
	this->_firstName = buff[0];
	this->_lastName = buff[1];
	this->_nickName = buff[2];
	this->_login = buff[3];
	this->_postalAddress = buff[4];
	this->_emailAddress = buff[5];
	this->_phoneNumber = buff[6];
	this->_birthDate = buff[7];
	this->_favouriteMeal = buff[8];
	this->_underwearColor = buff[9];
	this->_darkestSecret = buff[10];
	this->_index = PhoneBook::_nbInst;
	PhoneBook::_nbInst += 1;
}

void PhoneBook::createContact(void) {
	std::string buff[11];

	std::cout << "What is the contact's first name? ";
	std::getline(std::cin, buff[0]);
	std::cout << "What is the contact's last name? ";
	std::getline(std::cin, buff[1]);
	std::cout << "What is the contact's nick name? ";
	std::getline(std::cin, buff[2]);
	std::cout << "What is the contact's login? ";
	std::getline(std::cin, buff[3]);
	std::cout << "What is the contact's postal address? ";
	std::getline(std::cin, buff[4]);
	std::cout << "What is the contact's email address? ";
	std::getline(std::cin, buff[5]);
	std::cout << "What is the contact's birth date (DDMMYYYY)? ";
	std::getline(std::cin, buff[6]);
	std::cout << "What is the contact's favourite meal? ";
	std::getline(std::cin, buff[7]);
	std::cout << "What is the contact's underwear color? ";
	std::getline(std::cin, buff[8]);
	std::cout << "What is the contact's darkest secret?? ";
	std::getline(std::cin, buff[9]);
	std::cout << "What is the contact's phone number? ";
	std::getline(std::cin, buff[10]);
	this->setVariables(buff);
	std::cout << "New contact added" << std::endl;
}

PhoneBook::~PhoneBook(void) {
	_nbInst -= 1;
	return;
}

PhoneBook::PhoneBook(void) {
	return;
}

void	PhoneBook::printTruncated(std::string str) const {
	int len = str.length();
	
	if (len == 10)
		std::cout << str;
	else if (len < 10) {
		for (int i = 0; 10 - i != len; i++)
			std::cout << " ";
		std::cout << str;
	}
	else {
		for (int i = 0; i < 9; i++)
			std::cout << str[i];
		std::cout << ".";
	}
}

void PhoneBook::printPreview(void) const {
	std::cout << "         " << this->_index << "|";
	this->printTruncated(this->_firstName);
	std::cout << "|";
	this->printTruncated(this->_lastName);
	std::cout << "|";
	this->printTruncated(this->_nickName);
	std::cout << std::endl;
}

void PhoneBook::printContact(void) const {
	std::cout << this->_index << std::endl;
	std::cout << this->_firstName << std::endl;
	std::cout << this->_lastName << std::endl;
	std::cout << this->_nickName << std::endl;
	std::cout << this->_login << std::endl;
	std::cout << this->_postalAddress << std::endl;
	std::cout << this->_emailAddress << std::endl;
	std::cout << this->_phoneNumber << std::endl;
	std::cout << this->_birthDate << std::endl;
	std::cout << this->_favouriteMeal << std::endl;
	std::cout << this->_underwearColor << std::endl;
	std::cout << this->_darkestSecret << std::endl;
}

int	PhoneBook::getnbInst(void) {
	return PhoneBook::_nbInst;
};

int		PhoneBook::_nbInst = 0;
