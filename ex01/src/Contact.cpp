/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrotzsc <agrotzsc@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 10:57:38 by agrotzsc          #+#    #+#             */
/*   Updated: 2022/07/19 23:18:14 by agrotzsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact(void){
	return;
}

Contact::~Contact(void){
	std::cout << "Contact " << Contact::Nickname 
		<< " deleted from the phonebook." << std::endl;
	return;
}

void	Contact::SetPhoneNumber(void)
{
	std::cout << "Put the contact's phone number : ";
	std::getline(std::cin, Contact::PhoneNumber);
	if (Contact::PhoneNumber == "")
	{
		std::cout << "Entry Can't be empty" << std::endl;
		Contact::SetPhoneNumber();
	}
	return;
}

void	Contact::SetFirstName(void)
{
	std::cout << "Put the contact's first name : ";
	std::getline(std::cin, Contact::FirstName);
	if (Contact::FirstName == "")
	{
		std::cout << "Entry Can't be empty" << std::endl;
		Contact::SetFirstName();
	}
	return;
}

void	Contact::SetLastName(void)
{
	std::cout << "Put the contact's last name : ";
	std::getline(std::cin, Contact::LastName);
	if (Contact::LastName == "")
	{
		std::cout << "Entry Can't be empty" << std::endl;
		Contact::SetLastName();
	}
	return;
}

void	Contact::SetNickname(void)
{
	std::cout << "Put the contact's nickname : ";
	std::getline(std::cin, Contact::Nickname);
	if (Contact::Nickname == "")
	{
		std::cout << "Entry Can't be empty" << std::endl;
		Contact::SetNickname();
	}
	return;	
}

void	Contact::SetDarkestSecret(void)
{
	std::cout << "Put the contact's darkest secret : ";
	std::getline(std::cin, Contact::darkestSecret);
	if (Contact::darkestSecret == "")
	{
		std::cout << "Entry Can't be empty" << std::endl;
		Contact::SetDarkestSecret();
	}
	return;
}

std::string	Contact::GetPhoneNumber(void) const {
	return (this->PhoneNumber);
}

std::string	Contact::GetFirstName(void) const {
	return (this->FirstName);
}

std::string	Contact::GetLastName(void) const {
	return (this->LastName);
}

std::string	Contact::GetNickname(void) const {
	return (this->Nickname);
}

std::string	Contact::getDarkestSecret(void) const {
	return (this->darkestSecret);
}