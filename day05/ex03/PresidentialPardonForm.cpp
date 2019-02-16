/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 00:13:29 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/29 00:13:35 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

//constructors
PresidentialPardonForm::PresidentialPardonForm(void) : Form() {
    return;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
        Form(target, "presidential pardon", 25, 5) {
    return;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src)
        : Form(src) {
    *this = src;
    return;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {
    return;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs) {
    static_cast <void> (rhs);
    return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
    if (!this->isSigned())
        throw Form::NotSignedException();
    if (this->getGradeExec() < executor.getGrade())
        throw Form::GradeTooLowException();
    std::cout << this->getTarget() << " was pardoned by Zaphod Beeblebrox"
        << std::endl;
}