/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 15:03:42 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/21 16:01:42 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int i = 1; i < argc; i++)
	{
		for (int c = 0; c < (int)strlen(argv[i]); c++)
		{
			if (argv[i][c] >= 'a' && argv[i][c] <= 'z')
				std::cout << (char)(argv[i][c] - 32);
			else
				std::cout << (char)argv[i][c];
		}
	}
	std::cout << std::endl;
	return (0);
}
