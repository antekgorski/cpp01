/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 10:11:29 by agorski           #+#    #+#             */
/*   Updated: 2025/04/17 12:48:29 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class Harl
{
    private:
        void debug ( void );
        void info ( void );
        void warning ( void );
        void error( void ) ;
    public:
        void complain( std::string level );
};

#endif

// Syntax
// return_type (ClassName::*pointer_name)(argument_types) = &ClassName::member_function;
// where:
// return_type: is the return type of the member function of the class.
// ClassName: is the name of the class to which the member function belongs.
// *pointer_name: is the name of the function pointer variable.
// argument_types: are the types of the arguments accepted by the member function.
// &ClassName::member_function: is the address of the member function being assigned to the function pointer.