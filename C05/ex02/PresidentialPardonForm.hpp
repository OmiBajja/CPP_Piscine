/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 14:32:04 by obajja            #+#    #+#             */
/*   Updated: 2025/11/27 23:32:52 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <ctime>
#include "AForm.hpp"

class PresidentialPardonForm: public AForm {

    public:
        PresidentialPardonForm(PresidentialPardonForm const & src);
        PresidentialPardonForm(std::string name_to_set);
        ~PresidentialPardonForm();
        std::string getTarget() const;
        PresidentialPardonForm &  operator=(PresidentialPardonForm const & src);
        void execute(Bureaucrat const & executor) const;

    private:
        std::string _target;
};

#endif