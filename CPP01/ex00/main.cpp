/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkomba <gkomba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 14:52:58 by gkomba            #+#    #+#             */
/*   Updated: 2025/03/17 18:16:50 by gkomba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie  *zumbi;
    
    zumbi = newZombie("Zumbi 1");
    zumbi->announce();
    randomChump("Zumbi 2");
    delete (zumbi);
    return (0);
}