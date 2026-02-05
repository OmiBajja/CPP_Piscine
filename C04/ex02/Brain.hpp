/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 12:55:53 by obajja            #+#    #+#             */
/*   Updated: 2025/10/30 14:04:28 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain{

    public:
        Brain ( void );
        Brain ( Brain const & src );
        ~Brain ( void );
        Brain & operator=( Brain const & src );
        std::string getIdea( int idx ) const;
        void setIdea( std::string const thought, int idx);

    private:
        std::string ideas[100];

};

#endif