/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkomba <gkomba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 13:01:52 by gkomba            #+#    #+#             */
/*   Updated: 2025/03/18 17:06:33 by gkomba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
    private:
        std::string name;
        Weapon      *weapon;

    public:
        HumanB(std::string Nname);
        void    setWeapon(Weapon &Nweapon);
        void    attack(void);
        ~HumanB();
};
