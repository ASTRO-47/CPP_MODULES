/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iez-zagh <iez-zagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 16:43:15 by iez-zagh          #+#    #+#             */
/*   Updated: 2024/11/22 21:52:45 by iez-zagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	phonebook_usage()
{
	std::cout << " -------- 📞 Welcome to my awesome phone book ---------\n";
	std::cout << "wondring how to use it? let me break it down for you:\n";
	std::cout << "\nADD        ---->       to add a new contact\n";
	std::cout << "\nSEARCH     ---->       for search an existing contact\n";
	std::cout << "\nEXIT       ---->       to exit the PhoneBook\n";
	std::cout << "---------------------------------------------------\n";
}

int main()
{
	std::string		input_string = "";
	phonebook_usage();
	PhoneBook book;
	while (input_string.compare("EXIT"))
	{
		if (!input_string.compare("ADD"))
			book.add_contact();
		else if (!input_string.compare("SEARCH"))
			book.show_book();
		else if (input_string.compare(""))
			std::cout << "invalid command" << std::endl;
		std::cout << ">" << std::flush;
		std::getline(std::cin, input_string);
		if (std::cin.eof())
			exit (0);
	}
	std::cout << "its too sad seing you leaving\n";
	return (0);
}
