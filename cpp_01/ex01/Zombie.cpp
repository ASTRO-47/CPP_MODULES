/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iez-zagh <iez-zagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 18:25:43 by iez-zagh          #+#    #+#             */
/*   Updated: 2024/11/26 11:51:41 by iez-zagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

Zombie::Zombie()
{
    // do nothing
}

void    Zombie::announce()
{
    std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::set_name(std::string _name)
{
    this->name = _name;
}