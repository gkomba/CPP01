/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkomba <gkomba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 20:44:03 by gkomba            #+#    #+#             */
/*   Updated: 2025/03/17 21:05:28 by gkomba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
    private:
        std::string name;
        
    public:
        Zombie();
        void    announce(void);
        void    setName(std::string name);
        ~Zombie();
};

Zombie* zombieHorde(int N, std::string name);

#endif