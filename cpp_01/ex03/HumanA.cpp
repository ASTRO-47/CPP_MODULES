/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iez-zagh <iez-zagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:43:29 by iez-zagh          #+#    #+#             */
/*   Updated: 2024/11/25 20:38:18 by iez-zagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanA.hpp"

void    HumanA::attack()
{
    std::cout << this->name <<  "attacks with their " << this->weapon.getType() << std::endl;
}

HumanA::HumanA(std::string name_, Weapon &w) : weapon(w) // we do that because the reference init just in declaration
{
    this->name = name_;
}

void    HumanA::setWeapon(Weapon &w)
{
    this->weapon = w;
}
