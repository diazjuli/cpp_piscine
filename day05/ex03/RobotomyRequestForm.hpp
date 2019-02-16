/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 00:12:00 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/29 00:12:31 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <cstdlib>

class RobotomyRequestForm : public Form {
public:
    //constructors
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(RobotomyRequestForm const & src);
    virtual ~RobotomyRequestForm(void);

    //operator overloads
    RobotomyRequestForm & operator=(RobotomyRequestForm const & rhs);

    virtual void execute(Bureaucrat const & executor) const;

private:
    //constructors
    RobotomyRequestForm(void);
};

#endif
