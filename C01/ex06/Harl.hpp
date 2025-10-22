/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 14:16:58 by obajja            #+#    #+#             */
/*   Updated: 2025/10/13 15:41:02 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl{
    
    public:
        Harl(void);
        ~Harl(void);
        void complain (std::string level);

    private:
        void debug (void);
        void info (void);
        void warning (void);
        void error (void);    
};

#endif