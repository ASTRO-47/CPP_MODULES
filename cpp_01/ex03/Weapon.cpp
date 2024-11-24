/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iez-zagh <iez-zagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:10:26 by iez-zagh          #+#    #+#             */
/*   Updated: 2024/11/24 17:13:16 by iez-zagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Weapon.hpp"

Weapon::Weapon(std::string type_)
{
    this->setType(type_);
}

void    Weapon::setType(std::string newtype)
{
    this->type = newtype;
}

const std::string&   Weapon::getType()
{
    return (this->type);
}
