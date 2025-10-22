/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 14:18:50 by obajja            #+#    #+#             */
/*   Updated: 2025/10/10 14:18:51 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

int main(void)
{
    std::string src = "HI THIS IS BRAIN";
    std::string *stringPTR = &src;
    std::string &stringREF = src;

    std::cout <<"This is the address of src: " << &src << std::endl;
    std::cout <<"This is the address of stringPTR: " << stringPTR << std::endl;
    std::cout <<"This is the address of stringREF: " << &stringREF << std::endl;
    std::cout << "\n" << std::endl;
    std::cout <<"This is the value of src: " << src << std::endl;
    std::cout <<"This is the value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout <<"This is the value pointed to by stringREF: " << stringREF << std::endl;

    return (0);
}