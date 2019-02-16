/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 00:12:37 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/29 00:12:42 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

//constructors
RobotomyRequestForm::RobotomyRequestForm(void) {
    return;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
    Form(target, "robotomy", 72, 45) {
    return;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) :
        Form(src) {
    *this = src;
    return;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
    return;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs) {
    static_cast <void> (rhs);
    return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
    if (!this->isSigned())
        throw NotSignedException();
    if (this->getGradeExec() < executor.getGrade())
        throw Form::GradeTooLowException();
    srand(time(NULL));
    if (rand() % 2)
        std::cout << "RIZZZZ.... " << this->getTarget() << " was robotomized " <<
            "succesfully"<< std::endl;
    else
        std::cout << "Failed to robotomize " << this->getTarget() << std::endl;
}