/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrotzsc <agrotzsc@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 23:22:51 by agrotzsc          #+#    #+#             */
/*   Updated: 2022/07/19 23:23:48 by agrotzsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int		main(void)
{
	std::string	cmd;
	PhoneBook	book;
	int			index = 0;

	while (cmd != "EXIT")
	{
		std::cout << "Enter a command for the Phonebook (put EXIT to quit the phonebook): ";
		std::getline(std::cin, cmd);
		if (std::cin.eof())
			exit(0);
		if (cmd == "ADD")
		{
			if (index >= 8)
				std::cout << "Phonebook list is full, we will erase the oldest contact in" 
					<< " the list to add the newer." << std::endl;
			book.AddContact(&book._book[(index % 8)]);
			index++;
		}
		if (cmd == "SEARCH")
		{
			if (index > 8){
				book.ShowAllContacts(8);
				std::cout << "test" << std::endl;
			}
			else
				book.ShowAllContacts(index);
			book.SearchContact();
		}
	}
}
