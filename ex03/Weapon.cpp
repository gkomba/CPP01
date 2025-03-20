/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkomba <gkomba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 12:36:21 by gkomba            #+#    #+#             */
/*   Updated: 2025/03/18 16:58:07 by gkomba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string Wtype) : type(Wtype) {}

const std::string& Weapon::getType(void) const
{
    return(type);
}

void Weapon::setType(std::string Ntype)
{
    type = Ntype;
}

Weapon::~Weapon(){}

