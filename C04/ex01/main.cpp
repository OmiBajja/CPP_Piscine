/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 13:41:35 by obajja            #+#    #+#             */
/*   Updated: 2025/10/30 14:43:02 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* l = new WrongCat();

    std::cout << meta->getType() << " " << std::endl;
    meta->makeSound();
    std::cout << std::endl;

    std::cout << j->getType() << " " << std::endl;
    j->makeSound();
    std::cout << std::endl;

    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    std::cout << std::endl;


    std::cout << l->getType() << " " << std::endl;
    l->makeSound();
    std::cout << std::endl;

    delete meta;
    delete j;
    delete i;
    delete l;

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    Dog p;
    Dog o;

    p.setIdea("First sentence", 0);
    p.setIdea("Second sentence", 1);
    p.setIdea("Third sentence", 2);

    o = p;
    
    std::cout << "\nThese are P's ideas:\n" << p.getIdea(0) << "\n" << p.getIdea(1) << "\n" << p.getIdea(2) << std::endl;
    std::cout << "\nThese are O's ideas:\n" << o.getIdea(0) << "\n" << o.getIdea(1) << "\n" << o.getIdea(2) << std::endl;

    o.setIdea("Modified sentece", 1);

    std::cout << "\nThese are P's ideas:\n" << p.getIdea(0) << "\n" << p.getIdea(1) << "\n" << p.getIdea(2) << std::endl;
    std::cout << "\nThese are O's ideas:\n" << o.getIdea(0) << "\n" << o.getIdea(1) << "\n" << o.getIdea(2) << std::endl;
    std::cout << "\n";

    Cat m;
    Cat n;

    m.setIdea("Cat sentence", 0);
    m.setIdea("Fat sentence", 1);
    m.setIdea("Bat sentence", 2);

    n = m;
    
    std::cout << "\nThese are m's ideas:\n" << m.getIdea(0) << "\n" << m.getIdea(1) << "\n" << m.getIdea(2) << std::endl;
    std::cout << "\nThese are O's ideas:\n" << n.getIdea(0) << "\n" << n.getIdea(1) << "\n" << n.getIdea(2) << std::endl;

    n.setIdea("Meow sentece", 1);

    std::cout << "\nThese are m's ideas:\n" << m.getIdea(0) << "\n" << m.getIdea(1) << "\n" << m.getIdea(2) << std::endl;
    std::cout << "\nThese are O's ideas:\n" << n.getIdea(0) << "\n" << n.getIdea(1) << "\n" << n.getIdea(2) << std::endl;
    std::cout << "\n";
    
    return 0;
}