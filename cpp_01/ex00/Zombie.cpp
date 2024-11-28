/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iez-zagh <iez-zagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 17:21:26 by iez-zagh          #+#    #+#             */
/*   Updated: 2024/11/27 21:09:00 by iez-zagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce( void ){
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..."<<std::endl;
}

Zombie::Zombie(std::string _name)
{
    this->name = _name;
}

Zombie::~Zombie()
{
    std::cout << this->name << " destroyed" << std::endl;
}