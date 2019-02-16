/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 14:22:49 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/29 14:22:50 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
//constructors
Intern::Intern(void) {
    return;
}

Intern::Intern(Intern const & src) {
    *this = src;
    return;
}

Intern::~Intern(void) {
    return;
}

Intern & Intern::operator=(Intern const & rhs) {
    static_cast <void> (rhs);
    return (*this);
}

Form * Intern::makeForm(std::string formName, std::string target) const {
    Form *form;
    if (!formName.compare("robotomy request"))
        form = new RobotomyRequestForm(target);
    else if(!formName.compare("shrubbery creation"))
        form = new ShrubberyCreationForm(target);
    else if (!formName.compare("presidential pardon"))
        form = new PresidentialPardonForm(target);
    else {
        std::cout << "Form " << formName << " is not a valid form" << std::endl;
        throw Intern::UnknownFormException();
    }
    std::cout << "Intern creates " << form->getName() << std::endl;
    return form;
}

//constructors
Intern::UnknownFormException::UnknownFormException(void) {
    return;
}

Intern::UnknownFormException::UnknownFormException(Intern::UnknownFormException const & src)
        : std::exception(src) {
    *this = src;
    return;
}

Intern::UnknownFormException::~UnknownFormException(void) throw() {
    return;
}

Intern::UnknownFormException & Intern::UnknownFormException::operator=(Intern::UnknownFormException const & rhs) {
    static_cast <void> (rhs);
    return (*this);
}

const char * Intern::UnknownFormException::what() const throw() {
    return "Form specified is unknown";
}
