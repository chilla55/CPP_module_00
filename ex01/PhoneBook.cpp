/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrotzsc <agrotzsc@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 10:57:45 by agrotzsc          #+#    #+#             */
/*   Updated: 2022/07/19 23:23:12 by agrotzsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void){
	std::cout << "Phonebook created." << std::endl;
	return;
}

PhoneBook::~PhoneBook(void){
	std::cout << "PhoneBook destroyed. All contacts in it are lost !" << std::endl;
	return;
}

std::string	str_resizing(std::string str)
{
	std::string	ret = str;
	if (str.size() > 10)
	{
		ret = str.substr(0, 10);
		ret[9] = '.';
	}
	return (ret);
}

void	PhoneBook::ShowAllContacts(int ContactNbr)
{
	int	i = 0;
	
	std::cout << std::endl << "|" << std::setw(10) << "index";
	std::cout << "|" << std::setw(10) << "first name";
	std::cout << "|" << std::setw(10) << "last name";
	std::cout << "|" << std::setw(10) << "nickname" << "|" << std::endl;
	while (i < ContactNbr)
	{
		std::cout << "|" << std::setw(10) << i + 1;
		std::cout << "|" << std::setw(10) << str_resizing(this->_book[i].GetFirstName());
		std::cout << "|" << std::setw(10) << str_resizing(this->_book[i].GetLastName());
		std::cout << "|" << std::setw(10) << str_resizing(this->_book[i].GetNickname()) << "|" << std::endl;
		i++;
	}
	std::cout << std::endl;
}

void	PhoneBook::ShowContact(int index) const
{
	std::cout << "Phone number : " << this->_book[index].GetPhoneNumber() << std::endl;
	std::cout << "First name : " << this->_book[index].GetFirstName() << std::endl;
	std::cout << "Last name : " << this->_book[index].GetLastName() << std::endl;
	std::cout << "Nickname : " << this->_book[index].GetNickname() << std::endl;
	std::cout << "Darkest Secret : " << this->_book[index].getDarkestSecret() << std::endl;
}

void	PhoneBook::AddContact(Contact *cont)
{
	cont->SetPhoneNumber();
	cont->SetFirstName();
	cont->SetLastName();
	cont->SetNickname();
	cont->SetDarkestSecret();
	std::cout << "New contact " << cont->GetFirstName() << " added to the phonebook."
				<< std::endl;
}

void	PhoneBook::SearchContact(void)
{
	long		i = 0;
	std::string	cmd;

	std::cout << "Put the contact's index you are looking for : ";
	std::getline(std::cin, cmd);
	if (std::cin.eof())
		exit(0);
	i = std::strtol(cmd.data(), NULL, 10);
	if (!(i >= 1 && i <= 8))
		std::cout << "Wrong index number sent. Please enter a correct index number."
				<< std::endl;
	else
		this->ShowContact(i - 1);
}
