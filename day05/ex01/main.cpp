/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 17:36:25 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/29 00:01:46 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>

#include "Bureaucrat.hpp"

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
		Form form("form a", 110, 100);
		Form formb("form b", 10, 10);
		std::cout << form << std::endl;
		std::cout << formb << std::endl;
		c.signForm(formb);
		c.signForm(form);
		std::cout << form << std::endl;
		std::cout << formb << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
    return (0);
}
