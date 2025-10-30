/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 18:20:10 by obajja            #+#    #+#             */
/*   Updated: 2025/10/28 13:53:15 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal{
  
    public:
        WrongAnimal ();
        WrongAnimal (WrongAnimal const & src);
        ~WrongAnimal ();
        WrongAnimal & operator=(WrongAnimal const & src);
        std::string getType ( void ) const;
        void makeSound ( void ) const;

    protected:
        std::string type;

};

#endif