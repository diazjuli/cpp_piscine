/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 17:36:25 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/28 18:58:22 by jdiaz            ###   ########.fr       */
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
		Bureaucrat c("juls", 150);
		Bureaucrat d("andy", 1);
		std::cout << c << std::endl << d << std::endl;
		//c.decGrade();
		d.incGrade();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
    return (0);
}
