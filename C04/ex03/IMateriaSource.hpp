/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:52:28 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/17 21:11:50 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "matrais.hpp"
# include <string>

class matrais;
class IMateriaSource
{
    public:
        virtual ~IMateriaSource() {}
        virtual void learnMateria(matrais *target) = 0;
        virtual matrais* createMateria(std::string const & type) = 0;
};