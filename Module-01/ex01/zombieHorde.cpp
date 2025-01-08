/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iez-zagh <iez-zagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 18:25:07 by iez-zagh          #+#    #+#             */
/*   Updated: 2024/11/26 11:56:12 by iez-zagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie  *zombies = new Zombie[N];
    if (!zombies)
        return (NULL);
    
    for (int i = 0; i < N; i++)
        zombies[i].set_name(name);
    return (zombies);
}