/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkomba <gkomba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 14:33:23 by gkomba            #+#    #+#             */
/*   Updated: 2025/03/17 17:30:21 by gkomba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Zombie
{
    private:
        std::string name;
    
    public:
        Zombie(std::string n);
        void    announce(void);
        ~Zombie();
};

Zombie    *newZombie(std::string name);
void    randomChump(std::string name);

#endif