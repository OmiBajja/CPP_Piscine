/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 12:46:13 by obajja            #+#    #+#             */
/*   Updated: 2025/12/29 13:10:16 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <stdint.h>

int main(void)
{
    Data test;
    uintptr_t result = 0;
    void * deser;
    
    result = Serializer::serialize(&test);
    deser = Serializer::deserialize(result);

    std::cout << &result << '\n' << &test << '\n' << deser << std::endl;
    return(0);
}