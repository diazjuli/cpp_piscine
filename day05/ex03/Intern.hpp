/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 14:22:42 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/29 14:22:43 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"
#include <string>
#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern {
public:
    //constructors
    Intern(void);
    Intern(Intern const & src);
    ~Intern(void);

    //operator overloads
    Intern & operator=(Intern const & rhs);

    Form * makeForm(std::string formName, std::string target) const;

    class UnknownFormException : public std::exception {
    public:
        //constructors
        UnknownFormException(void);
        UnknownFormException(UnknownFormException const & src);
        virtual ~UnknownFormException(void) throw();
    
        //operator overloads
        UnknownFormException & operator=(UnknownFormException const & rhs);

        virtual const char * what() const throw();
    };

private:
    
};

#endif
