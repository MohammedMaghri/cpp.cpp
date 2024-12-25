/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 17:45:12 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/18 19:28:15 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

class IMaterbtiaSource ;
class MateriaSource ;

void v()
{
    system("leaks matrais");
}

int main()
{
    atexit(v);
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me;
    delete src;
}