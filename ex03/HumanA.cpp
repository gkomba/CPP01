/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkomba <gkomba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 09:51:50 by gkomba            #+#    #+#             */
/*   Updated: 2025/03/18 16:57:50 by gkomba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string Nname, Weapon &Nweapon) : name(Nname), weapon(Nweapon) {}

void    HumanA::attack(void)
{
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;  
}

HumanA::~HumanA(){}
