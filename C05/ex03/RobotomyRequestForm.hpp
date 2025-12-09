/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 14:32:04 by obajja            #+#    #+#             */
/*   Updated: 2025/11/27 23:30:08 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <ctime>
#include "AForm.hpp"

class RobotomyRequestForm: public AForm {

    public:
        RobotomyRequestForm(RobotomyRequestForm const & src);
        RobotomyRequestForm(std::string name_to_set);
        ~RobotomyRequestForm();
        std::string getTarget() const;
        RobotomyRequestForm &  operator=(RobotomyRequestForm const & src);
        void execute(Bureaucrat const & executor) const;

    private:
        std::string _target;
};

#endif