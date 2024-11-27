/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iez-zagh <iez-zagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 10:02:33 by iez-zagh          #+#    #+#             */
/*   Updated: 2024/11/27 15:12:54 by iez-zagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int main (int ac, char *av[])
{
    if (ac != 4)
        return (std::cerr << "Invalid nunmber of arguments !" << std::endl, 1);
    Sed obj(av);
    // if the occurence and the replacement word empty
    if ((obj.s1.empty() && obj.s2.empty()) || obj.s1.empty())
        return (std::cerr << "invalid arguments" << std::endl, 1);

    std::ifstream file(obj.f_name);

    // if can not open the file
    if (!file.is_open())
        return (std::cerr << "can't open the file "<<std::endl, 1);
    
    // if some thing heppens while replacing
    if (obj.read_replace(obj, file))
        return (file.close(), 1);
    
    // close the file stream
    file.close();
    return 0;
}

