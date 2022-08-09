/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrotzsc <agrotzsc@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 10:57:33 by agrotzsc          #+#    #+#             */
/*   Updated: 2022/07/19 23:17:41 by agrotzsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __CONTACT_HPP__
# define __CONTACT_HPP__

# include <iostream>
# include <string>

class Contact
{
private:
	std::string	PhoneNumber;
	std::string	FirstName;
	std::string	LastName;
	std::string	Nickname;
	std::string	darkestSecret;
	
public:
	Contact(void);
	~Contact(void);
	
	void		SetPhoneNumber(void);
	std::string	GetPhoneNumber(void) const;
	
	void		SetFirstName(void);
	std::string	GetFirstName(void) const;
	
	void		SetLastName(void);
	std::string	GetLastName(void) const;
	
	void		SetNickname(void);
	std::string	GetNickname(void) const;

	void		SetDarkestSecret(void);
	std::string	getDarkestSecret(void) const;
};

#endif