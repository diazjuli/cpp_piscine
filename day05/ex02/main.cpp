/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 17:36:25 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/29 14:20:09 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int	main(void)
{
	try
	{
		//Bureaucrat a("Too high", 0);
		//Bureaucrat b("Too low", 151);
		Bureaucrat c("juls", 100);
		Bureaucrat d("andy", 50);
		std::cout << c << std::endl << d << std::endl;
		c.decGrade();
		d.incGrade();

		//Form low("gradeTooLow", 160, 60);
		//Form loww("execGrade Too Low", 60, 160);
		//Form high("highGrade", -1, 10);
		//Form highh("execTooHigh", 10, -1);
		RobotomyRequestForm robotemy("drill");
		ShrubberyCreationForm shrubbery("target_file");
		PresidentialPardonForm pardon("jdiaz");
		std::cout << robotemy << std::endl;
		std::cout << shrubbery << std::endl;
		std::cout << pardon << std::endl;

		c.executeForm(robotemy);
		c.executeForm(shrubbery);
		c.executeForm(pardon);

		c.signForm(robotemy);
		c.signForm(shrubbery);
		c.signForm(pardon);

		c.executeForm(robotemy);
		c.executeForm(shrubbery);
		c.executeForm(pardon);

		d.signForm(robotemy);
		d.signForm(shrubbery);
		d.signForm(pardon);

		d.executeForm(robotemy);
		d.executeForm(shrubbery);
		d.executeForm(pardon);

		Bureaucrat pres("president", 1);

		pres.signForm(pardon);
		pres.executeForm(pardon);
		pres.executeForm(robotemy);

		std::cout << robotemy << std::endl;
		std::cout << shrubbery << std::endl;
		std::cout << pardon << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
    return (0);
}
