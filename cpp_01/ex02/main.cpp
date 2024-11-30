/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iez-zagh <iez-zagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 11:27:05 by iez-zagh          #+#    #+#             */
/*   Updated: 2024/11/28 14:54:52 by iez-zagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main ()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;
    std::cout << "address of the string:    " << &str << std::endl;
    std::cout << "address the pointer hold: " << stringPTR << std::endl;
    std::cout<< "address of the reference: " << &stringREF << std::endl;

    std::cout << "---------------------------------------" << std::endl;

    std::cout << "the value of the string:    "<< str << std::endl;
    std::cout << "the value in the pointer:   " << *stringPTR << std::endl;
    std::cout << "the value of the reference: "<< stringREF << std::endl;
}
