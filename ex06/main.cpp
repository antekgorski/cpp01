/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 10:10:24 by agorski           #+#    #+#             */
/*   Updated: 2025/04/17 19:35:10 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char *argv[])
{
    Harl harl;
    
    if (argc != 2)
    {
        std::cerr << "Error: Wrong number of arguments" << std::endl;
        std::cerr << "Usage: ./harlFilter <level>" << std::endl;
        return 1;
    }
    std::string level = argv[1];
    if (level.empty())
    {
        std::cerr << "Error: Level cannot be empty" << std::endl;
        return 1;
    }  
    harl.complain(level);
    return 0;
}