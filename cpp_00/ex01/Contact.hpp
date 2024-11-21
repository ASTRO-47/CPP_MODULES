/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iez-zagh <iez-zagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 19:23:14 by iez-zagh          #+#    #+#             */
/*   Updated: 2024/11/21 22:09:05 by iez-zagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact{
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname_name;
        std::string phone_number;
        std::string darkest_secret;
        int     index;

        std::string  get_input(std::string message);
    public:
       void init();
       void  set_index(int ind);
       void list_book();
};

#endif
