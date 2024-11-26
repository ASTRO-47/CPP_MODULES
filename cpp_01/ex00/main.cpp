/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iez-zagh <iez-zagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 17:17:07 by iez-zagh          #+#    #+#             */
/*   Updated: 2024/11/24 11:24:16 by iez-zagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    std::cout << "creating new zombie on stack\n";
    randomChump("bagito");
    
    std::cout << "creating new zombie on heap\n";
    Zombie *zombie = newZombie("Foooo");
    if (!zombie)
        exit (1);
    zombie->announce();
    delete(zombie);
}
