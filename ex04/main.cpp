/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 12:08:38 by agorski           #+#    #+#             */
/*   Updated: 2025/04/16 19:42:52 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

string myReplace(string content, string s1, string s2)
{
    size_t pos = 0;

    if (s1.empty() || s2.empty())
        return (content);
    while ((pos = content.find(s1, pos)) != string::npos)
    {
        content.erase(pos, s1.length());
        content.insert(pos, s2);
        pos += s2.length();
    }
    return (content);
}

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        std::cerr << "Error: Wrong number of arguments" << std::endl;
        std::cerr << "Usage: ./replace <filename> <search> <replace>" << std::endl;
    }
    else
    {
        std::string filename = argv[1];
        std::string s1 = argv[2];
        std::string s2 = argv[3];
        if (s1.empty() || s2.empty() || filename.empty())
        {
            std::cerr << "Error: Search and replace strings cannot be empty" << std::endl;
            return (1);
        }
        std::ifstream inFile(filename.c_str());
        if (!inFile)
        {
            std::cerr << "Error: Could not open file " << argv[1] << std::endl;
            return (1);
        }
        std::string replacedFilename = filename + ".replace";
        std::ofstream outFile(replacedFilename.c_str());
        if (!outFile)
        {
            std::cerr << "Error: Could not create file " << argv[1] << ".replace" << std::endl;
            if (inFile.is_open())
                inFile.close();
            return (1);
        }
        std::string content;

        while (std::getline(inFile, content))
        {
            outFile << myReplace(content, s1, s2);
            if (!inFile.eof())
                outFile << std::endl;
        }

        inFile.close();
        outFile.close();
    }
    return (0);
}