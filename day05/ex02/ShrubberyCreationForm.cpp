/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 00:11:39 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/29 00:11:44 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

//constructors

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form() {
    return;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
        Form(target, "shrubbery", 145, 137) {
    return;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src)
        : Form(src) {
    *this = src;
    return;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
    return;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=
        (ShrubberyCreationForm const & rhs) {
    static_cast <void> (rhs);
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
    if (!this->isSigned())
        throw NotSignedException();
    if (this->getGradeExec() < executor.getGrade())
        throw GradeTooLowException();
    std::ofstream outfile (this->getTarget());
    outfile << "Create ASCII trees here" << std::endl;
    outfile.close();
}

