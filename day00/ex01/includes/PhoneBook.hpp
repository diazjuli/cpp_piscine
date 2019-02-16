/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 18:46:46 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/22 17:35:57 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <string>
# include <iostream>

class PhoneBook {

public:

	PhoneBook(void);
	~PhoneBook(void);

	void createContact(void);
	void printContact(void) const;
	void printPreview(void) const;
	static int	getnbInst(void);

private:

	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickName;
	std::string	_login;
	std::string	_postalAddress;
	std::string	_emailAddress;
	std::string	_phoneNumber;
	std::string	_birthDate;
	std::string	_favouriteMeal;
	std::string	_underwearColor;
	std::string	_darkestSecret;
	int		_index;

	static int _nbInst;

	void	printTruncated(std::string str) const;
	void	setVariables(std::string buff[]);
};

#endif
