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
    Form(std::string target, std::string name, int gradeSign, int gradeExec);
    Form(Form const & src);
    virtual ~Form(void) = 0;

    //operator overloads
    Form & operator=(Form const & rhs);

    //getter functions
    std::string         getTarget(void) const;
    const std::string   getName(void) const;
    bool                isSigned(void) const;
    int                 getGradeSign(void) const;
    int                 getGradeExec(void) const;

    bool                canExec(Bureaucrat const & executor) const;
    virtual void        execute(Bureaucrat const & executor) const = 0;
    void                beSigned(Bureaucrat const & b);

    class NotSignedException : public std::exception {
    public:
        //constructors
        NotSignedException(void);
        NotSignedException(NotSignedException const & src);
        virtual ~NotSignedException(void) throw();
    
        //operator overloads
        NotSignedException & operator=(NotSignedException const & rhs);
        virtual const char * what() const throw(); 
    };

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
    std::string         _target;
    const std::string   _name;
    bool                _signed;
    const int           _gradeSign;
    const int           _gradeExec;
    
};  

std::ostream & operator<<(std::ostream & o, Form const & rhs);

#endif
