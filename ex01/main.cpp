/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkomba <gkomba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 20:46:07 by gkomba            #+#    #+#             */
/*   Updated: 2025/03/17 21:12:28 by gkomba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    int NumOfZumbi;
    int i;
    Zombie  *zHorde;

    NumOfZumbi = 5;
    zHorde = zombieHorde(NumOfZumbi, "Gildo");

    i = -1;
    while (++i < NumOfZumbi)
        zHorde[i].announce();

    delete[] zHorde;
}