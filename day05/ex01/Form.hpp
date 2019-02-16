/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 21:39:55 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/28 21:40:12 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <string>
#include <iostream>
#include <stdexcept>

class Bureaucrat;

class Form {
public:
    //constructors
    Form(void);
    Form(std::string name, int gradeSign, int gradeExec);
    Form(Form const & src);
    ~Form(void);

    //operator overloads
    Form & operator=(Form const & rhs);

    //getter functions
    const std::string   getName(void) const;
    bool                isSigned(void) const;
    int           getGradeSign(void) const;
    int           getGradeExec(void) const;

    void                beSigned(Bureaucrat const & b);

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

        virtual const char * what() const throw(); 
    };

private:
    const std::string _name;
    bool              _signed;
    const int         _gradeSign;
    const int         _gradeExec;
    
};  

std::ostream & operator<<(std::ostream & o, Form const & rhs);

#endif
