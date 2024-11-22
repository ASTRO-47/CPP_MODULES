/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iez-zagh <iez-zagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 16:18:30 by iez-zagh          #+#    #+#             */
/*   Updated: 2024/11/22 21:17:20 by iez-zagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

int check_number(std::string str)
{
    for (size_t i=0;i<str.length();i++)
    {
        if (!std::isdigit(str[i]))
            return 0;
    }
    return 1;
}

int    PhoneBook::get_index()
{
    std::string  index = "";
    int in_;
    while (true)
    {
        std::cout << "enter the contact index: " << std::flush;
        getline(std::cin , index);
        if (std::cin.eof())
            exit(0);
        in_ = std::atoi(index.c_str());
        if (index.length() < 3 && check_number(index) && !index.empty() && in_ >= 0 && in_ <= 7)
            return (in_) ;
        else
        {
            std::cout << "Invalid input, please try again.\n" << std::flush;
        }
    }
    return (in_);
}

void    PhoneBook::show_book()
{
    std::cout << "------------- PHONEBOOK CONTACTS ------------\n" << std::endl;
    for (int i = 0;i < 8; i++)
        contacts[i].list_book();
    contacts[get_index()].show_infos();
}

void    PhoneBook::add_contact()
{
    static int  i = 0;
    contacts[i % 8].init();
    contacts[i % 8].set_index(i % 8);
    i++;
}

