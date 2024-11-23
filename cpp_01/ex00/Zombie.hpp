/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iez-zagh <iez-zagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 17:17:23 by iez-zagh          #+#    #+#             */
/*   Updated: 2024/11/23 18:10:55 by iez-zagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    std::string name;
public:
    Zombie(std::string _name);
    ~Zombie();
    void announce( void ); 
};

void randomChump( std::string name );
Zombie* newZombie( std::string name );

#endif