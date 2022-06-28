/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrotzsc <agrotzsc@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 12:59:13 by agrotzsc          #+#    #+#             */
/*   Updated: 2022/06/28 13:34:50 by agrotzsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <algorithm>

int	main(int argc, char const *argv[])
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < argc; i++)
	{
		std::string str(argv[i]);
		for (size_t a = 0; a < str.length(); a++)
			std::cout << (char)std::toupper(str[a]);
		std::cout << " ";
	}
	std::cout << std::endl;
	return (0);
}
