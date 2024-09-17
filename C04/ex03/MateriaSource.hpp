/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:41:20 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/17 15:05:29 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.hpp"
# include "matrais.hpp"

class IMateriaSource ;
class materais ;

class MateriaSource :public IMateriaSource {
    private :
        matrais *enventory[4];
    public  :
        matrais* createMateria(std::string const & type);
        void learnMateria(matrais *target);
};