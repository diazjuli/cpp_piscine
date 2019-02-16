/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 00:12:54 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/29 00:13:24 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_HPP
# define PRESIDENTIAL_PARDON_FORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form {
public:
    //constructors
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(PresidentialPardonForm  const & src);
    virtual ~PresidentialPardonForm(void);

    //operator overloads
    PresidentialPardonForm & operator=(PresidentialPardonForm  const & rhs);

    virtual void execute(Bureaucrat const & executor) const;

private:
    //constructor
    PresidentialPardonForm(void);
};

#endif

