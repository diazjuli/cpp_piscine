/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 20:59:44 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/22 21:17:42 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void ponyOnTheHeap(std::string name, int age)
{
	Pony* heapPony = new Pony(name, age);

	std::cout << "Made a new Pony on the heap: name = " << heapPony->getName();
	std::cout << " age: " << heapPony->getAge() << std::endl;

	delete heapPony;
	std::cout << "Deleted Pony using 'delete' keyword" << std::endl;
}

void ponyOnTheStack(std::string name, int age)
{
	Pony stackPony(name, age);
	
	std::cout << "Making a new Pony on the Stack: name = " << stackPony.getName();
	std::cout << " age: " << stackPony.getAge() << std::endl;
}

int	main(void)
{
	ponyOnTheHeap("heapPony", 2);
	std::cout << std::endl;
	ponyOnTheStack("stackPony", 4);
}
