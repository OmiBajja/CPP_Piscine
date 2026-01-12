/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 12:34:45 by obajja            #+#    #+#             */
/*   Updated: 2025/12/29 12:50:04 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
    
}
Serializer::~Serializer()
{
    
}
Serializer::Serializer(Serializer const & src)
{
    (void)src;
}
Serializer & Serializer::operator=(Serializer const & src)
{
    (void)src;
    return (*this);
}

uintptr_t Serializer::serialize(Data* ptr)
{
    return(reinterpret_cast<uintptr_t>(ptr));
}
Data* Serializer::deserialize(uintptr_t raw)
{
    return(reinterpret_cast<Data *>(raw));   
}