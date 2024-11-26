/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iez-zagh <iez-zagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 19:19:02 by iez-zagh          #+#    #+#             */
/*   Updated: 2024/11/23 17:06:32 by iez-zagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Contact.hpp"

void    Contact::set_index(int ind)
{
    this->index = ind;
}

void    Contact::list_book()
{
    if (this->first_name.empty() || this->last_name.empty() || this->phone_number.empty())
        return ;
    int len;
    std::cout <<"|";
    std::cout << "         "<<this->index << "|";

    len = this->first_name.length();
    int lenght;

    if ((10 - len)  < 0)
        lenght = 0;
    else
        lenght = 10 - len;
    for (int i=0;i<lenght;i++)
        std::cout << ' ';
    if ((10 - len) < 0)
        std::cout << (this->first_name).substr(0, 9) << ".|";
    else
        std::cout << this->first_name << "|";
    len = this->last_name.length();
    if ((10-len) < 0)
        lenght = 0;
    else
        lenght= 10  - len;
    for (int i=0;i<lenght;i++)
        std::cout << ' ';
    if ((10 - len) < 0)
        std::cout << (this->last_name).substr(0, 9) << ".|";
    else
     std::cout << this->last_name << "|";
    len = this->nickname_name.length();
    if ((10-len) < 0)
        lenght = 0;
    else
        lenght = 10 - len;
    for (int i = 0; i < lenght; i++)
        std::cout << ' ';
    if ((10 - len) < 0)
        std::cout << (this->nickname_name).substr(0, 9) << ".|\n";
    else
        std::cout << this->nickname_name << "|\n";
}

bool    isall_spaces(std::string str)
{
    for (size_t i =0;i<str.length();i++)
    {
        if (str[i]!=' ')
            return 1;
    }
    return 0;
}

std::string get_input(std::string message)
{
    std::string name;
    while (true)
    {
        std::cout << message;
        std::getline(std::cin, name);
        if (std::cin.eof())
            exit(0);
        if (!isall_spaces(name))
            std::cout << "Invalid input, please try again." << std::endl;
        else
          return name;
    }
}

void    Contact::init()
{
    this->first_name = get_input("first name :");
    this->last_name = get_input("last name :");
    this->nickname_name = get_input("nickname:");
    this->phone_number = get_input("phone number :");
    this->darkest_secret = get_input("darkest secret :");
}

void    Contact::show_infos()
{
    if (this->first_name.empty() || this->last_name.empty() || this->nickname_name.empty())
    {
        std::cout<< "no one with this index in the phonebook\n";
        return ;
    }
    std::cout << std::endl;
    std::cout << "---->> CONTACT #" << index << " <<----" << std::endl;
    std::cout << "first Name:\t" << this->first_name << std::endl;
    std::cout << "last Name:\t" << this->last_name << std::endl;
    std::cout << "nickname:\t" << this->nickname_name << std::endl;
    std::cout << std::endl;
}