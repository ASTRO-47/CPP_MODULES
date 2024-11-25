/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iez-zagh <iez-zagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:45:31 by iez-zagh          #+#    #+#             */
/*   Updated: 2024/11/25 20:59:11 by iez-zagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanB.hpp"

void    HumanB::attack()
{
    std::cout << this->name <<  "attacks with their " << this->weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &w)
{
    this->weapon = &w;
}

HumanB::HumanB(std::string name_) // this can not be ref because its should initilize in the constructor
{
    this->name = name_;
}
