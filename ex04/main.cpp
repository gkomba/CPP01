/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkomba <gkomba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 18:24:12 by gkomba            #+#    #+#             */
/*   Updated: 2025/03/19 19:49:42 by gkomba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

void ft_replaceInFile(const std::string &filename, const std::string &s1, const std::string &s2)
{
    std::ifstream   inputFile(filename.c_str());
    std::string     line;
    std::string     content;
    size_t          pos;

    if (!inputFile)
    {
        std::cerr << "Erro ao abrir o arquivo!" << std::endl;
        return;
    }
    while (std::getline(inputFile, line))
    {
        content += line + "\n";
    }
    inputFile.close();
    while (true)
    {
        pos = content.find(s1);
        if (pos == std::string::npos)
            break;
        content.erase(pos, s1.length()); 
        content.insert(pos, s2);
    }
    std::ofstream   outputFile((filename + ".replace").c_str(), std::ofstream::out);
    if (!outputFile)
    {
        std::cerr << "Erro ao criar o arquivo de saída!" << std::endl;
        return;
    }
    outputFile << content;
    outputFile.close();
}

int     main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << argv[0] << "usage: <filename> <s1> <s2>" << std::endl;
        return (1);
    }
    ft_replaceInFile(argv[1], argv[2], argv[3]);
    return (0);
}