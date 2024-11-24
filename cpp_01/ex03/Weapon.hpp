/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iez-zagh <iez-zagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 15:00:48 by iez-zagh          #+#    #+#             */
/*   Updated: 2024/11/24 16:12:58 by iez-zagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP


#include <iostream>


class   Weapon{
private:
    std::string type;
public:
    Weapon(std::string type_);
   const std::string& getType(void);
   void setType(std::string newtype);
};

#endif