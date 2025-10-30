/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 20:07:19 by obajja            #+#    #+#             */
/*   Updated: 2025/10/29 20:27:45 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"


class MateriaSource: public IMateriaSource{

    public:
        
        MateriaSource( void );
        MateriaSource( MateriaSource const & src);
        ~MateriaSource( void );
        MateriaSource & operator=(MateriaSource const & src);
        void learnMateria(AMateria* );
        AMateria* createMateria(std::string const & type);
    
    private:
        
        AMateria* knowledge[4];

};




#endif