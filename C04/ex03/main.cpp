/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 17:45:12 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/18 18:47:14 by mmaghri          ###   ########.fr       */
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
    Ice *value = new Ice();
    Cure *notvalue = new Cure();
    src->learnMateria(value);
    src->learnMateria(notvalue);
    ICharacter* me = new Character("me");
    AMateria* tmp;
    AMateria* tmp1;
    tmp1 = src->createMateria("ice");
    me->equip(tmp1);
    me->unequip(0);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    delete tmp1;
    delete value ;
    delete notvalue ;
    delete bob;
    delete me;
    delete src;
    return 0;
}