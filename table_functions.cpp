/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   table_functions.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkomba <gkomba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 11:35:45 by gkomba            #+#    #+#             */
/*   Updated: 2025/03/20 11:43:46 by gkomba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

void    ft_function_one(void)
{
    std::cout << "I am the function one" << std::endl;
}

void    ft_function_two(void)
{
    std::cout << "I am the function two" << std::endl;   
}

void    ft_function_three(void)
{
    std::cout << "I am the function three" << std::endl;
}

int main(void)
{
    void    (*table_of_functions[3])() = {
        ft_function_one,
        ft_function_two,
        ft_function_three
    };

    int choose;
    std::cout << "Choose betwen 1 - 3" << std::endl;
    std::cin >> choose;

    if (choose <= 3 && choose >= 1)
        table_of_functions[choose - 1]();
}