/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 14:12:47 by agorski           #+#    #+#             */
/*   Updated: 2025/04/16 11:56:04 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanB
{
    private:
        std::string _name;
        Weapon* _weapon;
    public:
        // Constructor
        HumanB(std::string name);
        // methods
        void setWeapon(Weapon& weapon);
        void attack();
};

#endif