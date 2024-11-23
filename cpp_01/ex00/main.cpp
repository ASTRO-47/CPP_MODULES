/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iez-zagh <iez-zagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 17:17:07 by iez-zagh          #+#    #+#             */
/*   Updated: 2024/11/23 18:22:58 by iez-zagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    std::cout << "creating new zombie on stack\n";
    randomChump("bagito");
    
    std::cout << "creating new zombie on heap\n";
    Zombie *zombie = newZombie("Foooo");
    zombie->announce();
    delete(zombie);
}

