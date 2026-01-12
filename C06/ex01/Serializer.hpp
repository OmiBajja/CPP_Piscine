/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 12:34:47 by obajja            #+#    #+#             */
/*   Updated: 2025/12/29 13:08:57 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <stdint.h>


typedef struct Data{
    
    static const int rat = 42;

}t_data;

class Serializer{

    public:
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);

    private:
        Serializer();
        ~Serializer();
        Serializer(Serializer const & src);
        Serializer & operator=(Serializer const & src);
    
};


#endif