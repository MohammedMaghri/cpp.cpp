/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:41:20 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/18 15:19:44 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.hpp"
# include "AMateria.hpp"

class IMateriaSource ;
class AMateria ;

class MateriaSource : public IMateriaSource {
    private :
        AMateria *enventory[4];
    public  :
        MateriaSource();
        MateriaSource(const MateriaSource& target);
        MateriaSource& operator=(const MateriaSource& target);
        ~MateriaSource();
        AMateria* createMateria(std::string const & type);
        void learnMateria(AMateria *target);
};