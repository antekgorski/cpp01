/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 15:42:23 by agorski           #+#    #+#             */
/*   Updated: 2025/04/13 18:04:14 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

using std::string;
using std::cout;
using std::endl;

class Zombie
{
    private:
        string name;
    
    public:
        Zombie();
        Zombie(string name);
        ~Zombie();
        void setName(string name);
        void annouce(void);
};

Zombie* newZombie(string name);
void randomChump(string name);

#endif