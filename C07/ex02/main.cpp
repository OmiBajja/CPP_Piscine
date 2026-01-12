/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 14:51:45 by obajja            #+#    #+#             */
/*   Updated: 2026/01/07 15:33:56 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"
#include <string>

void const_tester( const Array<std::string> & str)
{
    std::cout << "\n-- Const testing -- \nreading from const str[0]: " << str[0] << std::endl;
    
    //str[0] = "THIS SHOULD BREAK IT";
}


int main()
{
    std::cout << "\n-- Array of strings test: --" << std::endl;    
    Array<std::string> str(2);
    str[0] = "Hello ";
    str[1] = "World";

    std::cout << str[0] << str[1] << std::endl;

    const_tester(str);
    
    std::cout << "\n-- [] access test --" << std::endl;
    Array<int> nothing;
    std::cout << "Nothing's size is: " << nothing.size() << std::endl;
    try{
        std::cout << "Trying to acces non existant index 2: " << nothing[2] << std::endl;
    }
    catch(const std::exception& e){
        std::cerr << "Caught Exception: " << e.what() << std::endl;
    };
    
    int n = 6;
    Array<int> OG(n);
    std::cout << "\n-- Simple tests: --" << std::endl;
    for (int i = 0; i < n; i++)
    {
        std::cout << "OG[" << i << "] initial: " << OG[i] << std::endl;
    }
    
    std::cout << std::endl;
    
    for (int i = 0; i < n; i++)
    {
        OG[i] += i * 7;
        std::cout << "OG[" << i << "] assigned: " << OG[i] << std::endl;
    }
    
    std::cout << "\n-- Copy constructor deep copy tests: --" << std::endl;
    Array<int> copy(OG);
    std::cout << "\n- Before Change -" << std::endl;
    for (int i = 0; i < n; i++)
    {
        std::cout << " OG[i]= " << OG[i] << " copy[i]= " << copy[i] << std::endl;
    }
    std::cout << "\n- After Change -" << std::endl;
    for (int i = 0; i < n; i++)
    {
        copy[i] += 3;
        std::cout << " OG[i]= " << OG[i] << " copy[i]= " << copy[i] << std::endl;
    }

    std::cout << "\n-- Assignement operator deep copy tests: --" << std::endl;
    Array<int> fresh = OG;
    std::cout << "\n- Before Change -" << std::endl;
    for (int i = 0; i < n; i++)
    {
        std::cout << " OG[i]= " << OG[i] << " fresh[i]= " << fresh[i] << std::endl;
    }
    std::cout << "\n- After Change -" << std::endl;
    for (int i = 0; i < n; i++)
    {
        fresh[i] += 7;
        std::cout << " OG[i]= " << OG[i] << " fresh[i]= " << fresh[i] << std::endl;
    }
    
}