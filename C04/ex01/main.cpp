/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 13:41:35 by obajja            #+#    #+#             */
/*   Updated: 2025/10/28 13:50:49 by obajja           ###   ########.fr       */
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

    return 0;
}