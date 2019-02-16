/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 00:10:54 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/29 00:11:32 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERRY_CREATION_FORM_HPP
# define SHRUBBERRY_CREATION_FORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form {
public:
    //constructors
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(ShrubberyCreationForm const & src);
    virtual ~ShrubberyCreationForm(void);

    //operator overloads
    ShrubberyCreationForm & operator=(ShrubberyCreationForm const & rhs);

    virtual void execute(Bureaucrat const & executor) const;

private:
    //constructors
    ShrubberyCreationForm(void);
};

#endif
