/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 17:00:45 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/28 17:00:48 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
//constructors
Bureaucrat::Bureaucrat(void) : _name("default"), _grade(10){
return;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name),
    _grade(grade) {
    if (this->_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (this->_grade > 150)
        throw Bureaucrat::GradeTooLowException();
    return;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) {
    *this = src;
    return;
}

Bureaucrat::~Bureaucrat(void) {
    return;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs) {
    this->_grade = rhs.getGrade();
    return (*this);
}

// getter functions
std::string const Bureaucrat::getName(void) const {
    return this->_name;
}

int Bureaucrat::getGrade(void) const {
    return this->_grade;
}

void Bureaucrat::incGrade(void) {
    if (this->_grade <= 1) {
        std::cout << this->getName() <<" already has the highest posible grade."
            << " Could not increment" << std::endl;
        throw Bureaucrat::GradeTooHighException();
    }
    this->_grade -= 1;
}

void Bureaucrat::decGrade(void) {
    if (this->_grade >= 150) {
        std::cout << "Could not decrement " << this->_name
            << "'s grade" << std::endl;
        throw Bureaucrat::GradeTooLowException();
    }
    this->_grade += 1;
}

const char * Bureaucrat::GradeTooHighException::what(void) const throw() {
    return ("Grade is too high");
}

const char * Bureaucrat::GradeTooLowException::what(void) const throw() {
    return ("Grade is too low");
}

//constructors
Bureaucrat::GradeTooLowException::GradeTooLowException(void) {
    return;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(Bureaucrat::GradeTooLowException const & src) {
*this = src;
    return;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw() {
    return;
}

Bureaucrat::GradeTooLowException & Bureaucrat::GradeTooLowException::
        operator=(Bureaucrat::GradeTooLowException const & rhs) {
    (Bureaucrat::GradeTooLowException)rhs; 
    return (*this);
}

//constructors

Bureaucrat::
GradeTooHighException::GradeTooHighException(void)
{
    return ;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const & src) {
*this = src;
    return;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw() {
    return;
}

Bureaucrat::GradeTooHighException & Bureaucrat::GradeTooHighException::
        operator=(Bureaucrat::GradeTooHighException const & rhs) {
    (Bureaucrat::GradeTooHighException)rhs; 
    return *this;
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs) {
    o << rhs.getName() << ", " << rhs.getGrade();
    return (o);
}