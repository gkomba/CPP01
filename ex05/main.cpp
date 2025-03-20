/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkomba <gkomba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 12:18:58 by gkomba            #+#    #+#             */
/*   Updated: 2025/03/20 12:51:19 by gkomba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << argv[0] << "Harl Mood (DEBUG/INFO/WARNING/ERROR)" << std::endl;
        return (1);
    }
    Harl    Harl20;

    Harl20.complain(argv[1]);
    return (0);
}