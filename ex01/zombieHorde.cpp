/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkomba <gkomba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 20:43:26 by gkomba            #+#    #+#             */
/*   Updated: 2025/03/17 21:12:26 by gkomba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    Zombie   *zombieHorde;
    int i;

    if (N <= 0)
        return (NULL);
    zombieHorde = new Zombie[N];
    i = -1;
    while (++i < N)
        zombieHorde[i].setName(name);
    return (zombieHorde);
}