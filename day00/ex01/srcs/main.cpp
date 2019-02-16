/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 17:55:52 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/22 17:55:53 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PhoneBook.hpp>

void newContact(PhoneBook contacts[]) {
    if (PhoneBook::getnbInst() != 8) {
        contacts[PhoneBook::getnbInst()].createContact();
    }
    else {
        std::cout << "You've reached the max number of contacts" << std::endl;
    }
}

void searchContact(PhoneBook contacts[]) {
    std::string input;
    int search;

    for (int i = 0; i < PhoneBook::getnbInst(); i++) {
        contacts[i].printPreview();
    }
    std::cout << "Enter the index of the contact you would like to display: ";
    std::getline(std::cin, input);
    if (input[0] < '0' || input[0] > '9')
        search = -1;
    else
        search = std::stoi(input);
    if (search < 0 || search >= PhoneBook::getnbInst()) {
        std::cout << "Invalid index " << std::endl;
    }
    else {
        contacts[search].printContact();
    }
}

int main(void) {
    std::string command;
    PhoneBook contacts[8];

    while (1) {
        std::cout << "What would you like to do?";
        std::getline(std::cin, command);

        if (command.compare("ADD") == 0) {
            newContact(contacts);
        }
        else if (command.compare("SEARCH") == 0) {
            searchContact(contacts);
        }
        else if (command.compare("EXIT") == 0) {
            exit(0);
        }
        else
            std::cout << "The available commands are: ADD, SEARCH, EXIT" << std::endl;
    }
    return (0);
}