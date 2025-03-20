/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl_tester.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkomba <gkomba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 15:46:14 by gkomba            #+#    #+#             */
/*   Updated: 2025/03/20 16:09:46 by gkomba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    harlTest(Harl &harl)
{
    std::cout << "Testing DEBUG Level:" << std::endl;
    harl.complain("DEBUG");
    std::cout << std::endl;

    std::cout << "Testing INFO Level:" << std::endl;
    harl.complain("INFO");
    std::cout << std::endl;
    
    std::cout << "Testing WARNING Level:" << std::endl;
    harl.complain("WARNING");
    std::cout << std::endl;

    std::cout << "Testing ERROR Level:" << std::endl;
    harl.complain("ERROR");
}

int main(void)
{
    Harl harl;

    harlTest(harl);
    return (0);
}