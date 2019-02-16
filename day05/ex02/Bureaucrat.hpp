/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 16:52:32 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/28 16:52:33 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <stdexcept>
#include "Form.hpp"

class Form;

class Bureaucrat {
    
public:
    //constructors
    Bureaucrat(void);
    Bureaucrat(std::string const name, int grade) ;
    Bureaucrat(Bureaucrat const & src);
    ~Bureaucrat(void);

    //operator overloads
    Bureaucrat & operator=(Bureaucrat const & rhs);

    //getter functions
    std::string const   getName(void) const;
    int                 getGrade(void) const;

    void                incGrade(void);
    void                decGrade(void);
    void                signForm(Form & form) const;
    void                executeForm(Form const & form) const;

    class GradeTooHighException : public std::exception {
        public:
        //constructors
        GradeTooHighException(void);
        GradeTooHighException(GradeTooHighException const & src);
        virtual ~GradeTooHighException(void) throw();
    
        //operator overloads
        GradeTooHighException & operator=(GradeTooHighException const & rhs);

        virtual const char * what() const throw();        
    };

    class GradeTooLowException : public std::exception {
        public:
        //constructors
        GradeTooLowException(void);
        GradeTooLowException(GradeTooLowException const & src);
        virtual ~GradeTooLowException(void) throw();
    
        //operator overloads
        GradeTooLowException & operator=(GradeTooLowException const & rhs);

        virtual const char * what(void) const throw();
    };

private:

    std::string const   _name;
    int                 _grade;
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif
