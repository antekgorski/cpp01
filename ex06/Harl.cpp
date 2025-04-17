/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 10:10:56 by agorski           #+#    #+#             */
/*   Updated: 2025/04/17 19:43:58 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void )
{
    std::cout << "[DEBUG] I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info( void )
{
    std::cout <<  "[INFO] I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning ( void )
{
    std::cout << "[WARNING] I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void )
{
    std::cout << "[ERROR] This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level )
{
    void (Harl::*functionPtrsArr[])( void ) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
    std::string ComplineArr[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
    for (int i = 0; i < 4; i++)
    {
        if (level == ComplineArr[i])
        {
            switch (i)
            {
            case 0:
                (this->*functionPtrsArr[0])();
            case 1:
                (this->*functionPtrsArr[1])();
            case 2:
                (this->*functionPtrsArr[2])();
            case 3:
                (this->*functionPtrsArr[3])();
            default:
                std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
                break;
            }
        }
    }
    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    return;
}
