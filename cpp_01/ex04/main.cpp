/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iez-zagh <iez-zagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 10:02:33 by iez-zagh          #+#    #+#             */
/*   Updated: 2024/11/27 12:08:39 by iez-zagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (int ac, char *av[])
{
    if (ac != 4)
    {
        std::cout << "Invalid nunmber of arguments !" << std::endl;
        return (1);
    }
    std::string f_name = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
    if (s1.empty() || s2.empty())
    {
        std::cout << "invalid arguments" << std::endl;
        return (1);
    }
    std::ifstream file(f_name);
    if (!file.is_open())
    {
        std::cout << "can't open the file "<<std::endl;
        exit(1);
    }
    if (read_replace(f_name, s1, s2, file))
        return 1;
    file.close();
    return 0;
}