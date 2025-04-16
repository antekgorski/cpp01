/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 14:41:43 by agorski           #+#    #+#             */
/*   Updated: 2025/04/16 11:52:01 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon
{
private:
    std::string type;

public:
    // Constructor
    Weapon();
    Weapon(std::string type);
    // Getter
    const std::string& getType();
    // Setter
    void setType(std::string type);
};

#endif