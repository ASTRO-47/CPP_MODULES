/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iez-zagh <iez-zagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 16:18:30 by iez-zagh          #+#    #+#             */
/*   Updated: 2024/11/22 00:23:18 by iez-zagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

void    PhoneBook::show_book()
{
    std::cout << "------------- PHONEBOOK CONTACTS ------------\n" << std::endl;
    // std:: cout << "|idnex    " <<"| firt name     |" << "    ast name     |"<<"     nickanem  |" << std::endl;
    for (int i = 0;i < 8; i++)
        contacts[i].list_book();

}

void    PhoneBook::add_contact()
{
    static int  i = 0;
    contacts[i % 8].init();
    contacts[i % 8].set_index(i % 8);
    i++;
}
