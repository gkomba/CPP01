/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkomba <gkomba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 13:01:37 by gkomba            #+#    #+#             */
/*   Updated: 2025/03/18 17:08:04 by gkomba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
// HumanB(std::string Nname, Weapon Nweapon);

HumanB::HumanB(std::string Nname) : name(Nname), weapon(NULL) {}

void    HumanB::setWeapon(Weapon &Nweapon)
{
    weapon = &Nweapon;
}

void    HumanB::attack(void)
{
    std::cout << name << " attacks with their " << weapon->getType() << std::endl;  
}

HumanB::~HumanB(){}