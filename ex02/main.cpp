/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkomba <gkomba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 21:24:28 by gkomba            #+#    #+#             */
/*   Updated: 2025/03/17 21:44:53 by gkomba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;;
    std::string &stringREF = string;

    std::cout << "Addresses:" << std::endl;
    std::cout << "The memory address of the string variable: " << &string << std::endl;
    std::cout << "The memory address held by stringREF: " << &stringREF << std::endl;
    std::cout << "The memory address held by stringPTR: " << &stringPTR << std::endl;
    std::cout << std::endl;
    std::cout << "Values:" << std::endl;
    std::cout << "The memory value of the string variable: " << string << std::endl;
    std::cout << "The memory value held by stringREF: " << stringREF << std::endl;
    std::cout << "The memory value held by stringPTR: " << *stringPTR << std::endl;
    return (0);
}