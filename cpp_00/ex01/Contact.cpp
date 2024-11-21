/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iez-zagh <iez-zagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 19:19:02 by iez-zagh          #+#    #+#             */
/*   Updated: 2024/11/22 00:20:03 by iez-zagh         ###   ########.fr       */
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
        std::cout << (this->nickname_name).substr(0, 9) << ".|";
    else
        std::cout << this->nickname_name << "|\n";
    
}

std::string Contact::get_input(std::string message)
{
    std::cout << message;
    std::string atr;
    std::cin >> atr;
    return (atr);
}

void    Contact::init()
{
    this->first_name = get_input("first name :");
    this->last_name = get_input("last name :");
    this->nickname_name = get_input("nickname:");
    this->phone_number = get_input("phone number :");
    this->darkest_secret = get_input("darkest secret :");
}
