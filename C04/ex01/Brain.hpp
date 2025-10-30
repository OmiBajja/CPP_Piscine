/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 12:55:53 by obajja            #+#    #+#             */
/*   Updated: 2025/10/28 13:00:14 by obajja           ###   ########.fr       */
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

    protected:
        std::string ideas[100];

};


#endif