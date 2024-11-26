/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iez-zagh <iez-zagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 16:39:12 by iez-zagh          #+#    #+#             */
/*   Updated: 2024/11/23 14:00:46 by iez-zagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
class PhoneBook
{
    Contact contacts[8];
    int     get_index();
public:
    void    add_contact();
    void    show_book();
};

#endif