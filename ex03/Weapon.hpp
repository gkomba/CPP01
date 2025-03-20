/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkomba <gkomba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 10:04:46 by gkomba            #+#    #+#             */
/*   Updated: 2025/03/18 12:44:02 by gkomba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include <string>

class Weapon
{
    private:
        std::string type;

    public:
        Weapon(std::string Wtype);
        const std::string &getType(void) const;
        void         setType(std::string Ntype);
        ~Weapon();
};


#endif