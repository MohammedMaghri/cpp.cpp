/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 17:45:12 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/18 15:18:20 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

class IMateriaSource ;
class MateriaSource ;

void v()
{
    system("leaks matrais");
}

int main(){
    atexit(v);
    IMateriaSource* src = new MateriaSource();
    Ice *tmp1 = new Ice();
    Cure *tmp2 = new Cure();
    src->learnMateria(tmp1);
    src->learnMateria(tmp2);
    ICharacter* me = new Character("me");
    AMateria* tmp;
    AMateria* tmp3;
    AMateria* thetmp;
    tmp = src->createMateria("ice");
    thetmp = tmp ;
    me->unequip(0);
    me->equip(tmp);

    tmp3 = src->createMateria("cure");
    me->equip(tmp3);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);

    delete thetmp;
    delete bob;
    delete me;
    delete src;
    delete tmp1;
    delete tmp2;
    delete tmp3;
    return 0;
};