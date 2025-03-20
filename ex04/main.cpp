/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkomba <gkomba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 18:24:12 by gkomba            #+#    #+#             */
/*   Updated: 2025/03/20 11:28:03 by gkomba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int ft_replaceInFile(const std::string &filename, const std::string &s1, const std::string &s2)
{
    std::ifstream   InputFile(filename.c_str());
    std::string     content;
    std::string     line;
    int             pos;

    if (!InputFile)
    {
        std::cerr << "Error onpenig the file" << std::endl;
        return (1);
    }
    while (std::getline(InputFile, line))
    {
        content += line + "\n";
        std::cout << line << std::endl;
    }
    InputFile.close();
    pos = 0;
    while (true)
    {
        pos = content.find(s1);
        if (pos == std::string::npos)
            break ;
        content.erase(pos, s1.length());
        content.insert(pos, s2);
    }
    std::ofstream   outPutFile((filename + ".replace").c_str(), std::ofstream::out);
    if (!outPutFile)
    {
        std::cerr << "Error Creating the file" << std::endl;
        return (1);
    }
    outPutFile << content;
    outPutFile.close();
    return (0);
}

int     main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << argv[0] << "usage: <filename> <s1> <s2>" << std::endl;
        return (1);
    }
    return (ft_replaceInFile(argv[1], argv[2], argv[3]));
}