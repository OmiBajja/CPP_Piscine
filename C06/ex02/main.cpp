/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 13:17:13 by obajja            #+#    #+#             */
/*   Updated: 2026/01/06 12:28:24 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Base.hpp>
#include <A.hpp>
#include <B.hpp>
#include <C.hpp>
#include <cstdlib>
#include <ctime>
#include <iostream>


Base * generate(void)
{
    int random = rand () % 3;
    if (random == 0)
        return (new A);
    else if (random == 1)
        return (new B);
    else
        return (new C);    
}

void identify(Base *p)
{
    Base *cmp;

    cmp = dynamic_cast<A*>(p);
    if ( cmp != NULL)
        std::cout << "It's an A" << std::endl;

    cmp = dynamic_cast<B*>(p);
    if ( cmp != NULL)
        std::cout << "It's a B" << std::endl;

    cmp = dynamic_cast<C*>(p);
    if ( cmp != NULL)
        std::cout << "It's a C" << std::endl;
}

void identify(Base &p)
{
    try
    {
        (void) dynamic_cast<A&>(p);
        std::cout << "THIS REF IS AN A" << std::endl;
    }
    catch (std::exception& e){}

    try
    {
        (void) dynamic_cast<B&>(p);
        std::cout << "THIS REF IS A B" << std::endl;
    }
    catch (std::exception& e){}


    try
    {
        (void) dynamic_cast<C&>(p);
        std::cout << "THIS REF IS A C" << std::endl;
    }
    catch (std::exception& e){}

    
}

int main (void)
{
    srand(time(NULL));
    
    Base * test1 = generate();
    Base * test2 = generate();
    Base * test3 = generate();
    Base * test4 = generate();
    Base * test5 = generate();

    std::cout << "These are the pointers:" << std::endl;
    identify(test1);
    identify(test2);
    identify(test3);
    identify(test4);
    identify(test5);

    std::cout << std::endl;

    std::cout << "These are the refs:" << std::endl;
    identify(*test1);
    identify(*test2);
    identify(*test3);
    identify(*test4);
    identify(*test5);

    delete test1;
    delete test2;
    delete test3;
    delete test4;
    delete test5;

}