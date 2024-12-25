/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 14:30:55 by mmaghri           #+#    #+#             */
/*   Updated: 2024/08/23 17:39:46 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP 
# define HARL_HPP 

#include <iostream>
#include <string>

class Harl {

    private :
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
    public :
        void complain(std::string level);
};

#endif