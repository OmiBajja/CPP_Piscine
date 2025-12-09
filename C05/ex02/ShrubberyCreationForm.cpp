/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 14:32:08 by obajja            #+#    #+#             */
/*   Updated: 2025/11/28 14:29:43 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

std::string file_tree_copy()
{
    std::stringstream content;

    std::ifstream file_stream("Tree.txt");
    if (file_stream.is_open())
    {
        content << file_stream.rdbuf();
        return (content.str());
    }
    return "";
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name_to_set):AForm(name_to_set, 145, 137), _target(name_to_set)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src):AForm(src)
{

}

std::string ShrubberyCreationForm::getTarget( void ) const
{
    return (this->_target);
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & src)
{
    if (this != &src)
        AForm::operator=(src);
    return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (this->AForm::getSignature() && executor.getGrade() < this->getGradeToExecute())
    {
        std::ofstream Tree((this->getTarget()+"_shrubbery").c_str());
        Tree << file_tree_copy();
        std::cout << "Trees have been created in " << this->getTarget()+"_shrubbery" << std::endl;
    }
    else
    {
        std::cout << executor.getName() << " couldn't execute " << this->getName() << " because Grade is too low" << std::endl;
        throw GradeTooLowException();
    }
}