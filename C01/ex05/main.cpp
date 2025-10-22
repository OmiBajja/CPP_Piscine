/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 14:17:00 by obajja            #+#    #+#             */
/*   Updated: 2025/10/13 15:44:06 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<Harl.hpp>

int main(int ac, char *av[])
{
    Harl instance;
    
    if (ac != 2)
    {   
        std::cout << "Usage: ./Harl 'INFO' or 'DEBUG' or 'WARNING' or 'ERROR'" << std::endl; 
        return(1);
    }
    instance.complain(av[1]);
    return (0);
}