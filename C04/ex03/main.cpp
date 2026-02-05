/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 16:08:03 by obajja            #+#    #+#             */
/*   Updated: 2025/10/30 15:11:13 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"



int main()
{
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

    ICharacter* mike = new Character("mike");
    tmp = src->createMateria("ice");
    Cure *rat = new Cure();
    src->learnMateria(rat);
    src->learnMateria(rat);
    src->learnMateria(rat);
    src->learnMateria(rat);
    src->learnMateria(rat);
    src->learnMateria(rat);
    src->learnMateria(rat);
    me->equip(tmp);
    me->equip(tmp);
    me->equip(tmp);
    me->equip(tmp);    
    tmp = src->createMateria("cure");
    me->equip(tmp);
    me->use(0, *mike);
    me->use(1, *mike);
    me->use(2, *mike);
    me->unequip(2);
    me->unequip(2);
    me->use(2, *mike);
    me->unequip(0);
    me->use(1, *mike);
    me->use(3, *mike);
    me->use(6, *mike);
    me->use(612312, *mike);


    
    delete bob;
    delete me;
    delete src;
    delete mike;

    
    return 0;
}