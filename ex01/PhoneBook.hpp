/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrotzsc <agrotzsc@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 10:58:01 by agrotzsc          #+#    #+#             */
/*   Updated: 2022/08/09 13:22:44 by agrotzsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PHONEBOOK_H__
# define __PHONEBOOK_H__

# include "Contact.hpp"
# include <iomanip>
# include <cstdlib>

// will use setw from iomanip for the display format later.

class PhoneBook
{
private:
public:
	PhoneBook(void);
	~PhoneBook();

	Contact	_book[8];
	void	ShowAllContacts(int ContactNbr);
	void	ShowContact(int index) const;
	void	AddContact(Contact *cont);
	void	SearchContact(void);

};

#endif