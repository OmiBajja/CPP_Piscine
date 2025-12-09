/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 14:32:04 by obajja            #+#    #+#             */
/*   Updated: 2025/11/25 17:45:29 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include "AForm.hpp"

class ShrubberyCreationForm: public AForm {

    public:
        ShrubberyCreationForm(ShrubberyCreationForm const & src);
        ShrubberyCreationForm(std::string name_to_set);
        ~ShrubberyCreationForm();
        std::string getTarget() const;
        ShrubberyCreationForm &  operator=(ShrubberyCreationForm const & src);
        void execute(Bureaucrat const & executor) const;

    private:
        std::string _target;
};

std::string file_tree_copy();

#endif