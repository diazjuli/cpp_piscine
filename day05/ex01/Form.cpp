/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 21:39:35 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/28 21:39:48 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

//constructors
Form::Form(void) : _name("default"), _signed(false), 
        _gradeSign(100), _gradeExec(100) {
    return;
}

Form::Form(std::string name, int gradeSign, int gradeExec) : _name(name),
         _signed(false), _gradeSign(gradeSign), _gradeExec(gradeExec) {
    if (this->_gradeSign < 1 || this->_gradeExec < 1)
        throw Bureaucrat::GradeTooHighException();
    if (this->_gradeSign > 150 || this->_gradeExec > 150)
        throw Bureaucrat::GradeTooLowException();
    return;
}

Form::Form(Form const & src) : _name(src.getName()), _signed(false), 
        _gradeSign(src.getGradeSign()), _gradeExec(src.getGradeExec()) {
    *this = src;
    return;
}

Form::~Form(void) {
    return;
}

Form & Form::operator=(Form const & rhs) {
    this->_signed = rhs.isSigned();
    return *this;
}

const std::string   Form::getName(void) const {
    return this->_name;
}

bool Form::isSigned(void) const {
    return this->_signed;
}

int Form::getGradeSign(void) const {
    return this->_gradeSign;
}

int  Form::getGradeExec(void) const {
    return this->_gradeExec;
}

void Form::beSigned(Bureaucrat const & b) {
    if (b.getGrade() > this->_gradeSign)
        throw Form::GradeTooLowException();
    this->_signed = true;
}

//constructors
Form::GradeTooHighException::GradeTooHighException(void) {
    return;
}

Form::GradeTooHighException::GradeTooHighException(
        Form::GradeTooHighException const & src) {
    *this = src;
    return;
}

Form::GradeTooHighException::~GradeTooHighException(void) throw() {
    return;
}

Form::GradeTooHighException & Form::GradeTooHighException::operator=
        (Form::GradeTooHighException const & rhs) {
    static_cast <void> (rhs);
    return *this;
}

const char * Form::GradeTooHighException::what() const throw() {
    return "Grade can not exceed 150"; 
}

//constructors
Form::GradeTooLowException::GradeTooLowException(void) {
    return;
}


Form::GradeTooLowException::GradeTooLowException(
        Form::GradeTooLowException const & src) {
    *this = src;
    return;
}

Form::GradeTooLowException::~GradeTooLowException(void) throw() {
    return;
}

Form::GradeTooLowException & Form::GradeTooLowException::operator=
        (Form::GradeTooLowException const & rhs) {
    static_cast <void> (rhs);
    return *this;
}

const char * Form::GradeTooLowException::what() const throw() {
    return "Grade must be greater than 0"; 
}

std::ostream & operator<<(std::ostream & o, Form const & rhs) {
    o << rhs.getName() << " " << "is ";
    if (!rhs.isSigned())
        o << "not ";
    o << "signed. Bureaucrat must have grade: " << rhs.getGradeSign();
    o << " to sign and : " << rhs.getGradeExec() << " to execute";
    return o;
}


