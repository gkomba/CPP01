/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkomba <gkomba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 11:33:06 by gkomba            #+#    #+#             */
/*   Updated: 2025/03/18 12:49:40 by gkomba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
    private:
        std::string name;
        Weapon      &weapon;

    public:
        HumanA(std::string Nname, Weapon &Nweapon);
        void    attack(void);
        ~HumanA();
};