/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iez-zagh <iez-zagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 18:19:18 by iez-zagh          #+#    #+#             */
/*   Updated: 2024/11/23 18:19:31 by iez-zagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
    Zombie *zombie = new Zombie(name);
    return zombie;
}

 void randomChump( std::string name ){
    Zombie zombie(name);
    zombie.announce();
}