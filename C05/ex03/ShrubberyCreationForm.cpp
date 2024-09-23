/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 15:08:00 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/23 18:45:21 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("From_Shrubbery", 145, 137), target("Default"){ std::cout << "ShrubberyCreationForm Cons" << std::endl;};
ShrubberyCreationForm::ShrubberyCreationForm(const std::string& value) : AForm("From_Shrubbery", 145, 137), target(value) {};
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& value) : AForm(value) ,  target(value.target) {};
ShrubberyCreationForm::~ShrubberyCreationForm () {std::cout << "Destructor Is Called !" << std::endl ;};
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& value){
    this->ifsigned = value.ifsigned ;
    this->target = value.target ;
    return (*this);
};
std::string ShrubberyCreationForm::Get_target(){return (this->target);};

void ShrubberyCreationForm::execute(Bureaucrat const& executor){
    (this->Sign_grade <= 145 && this->Excute_grade <= 137 && executor.getGrade() <= 145) ? 
    (functionDrawThree()) : (throw(CatchError()));
};

const char * ShrubberyCreationForm::CatchError::what() const throw(){
    return ("Not a Valid Value !");
};

std::string ShrubberyCreationForm::functionDrawThree() {
    std::cout << "Intern Creates " << this->target << std::endl;
    std::string value = "\n            <**>\n           <-**->\n          <******>\n          ********\n          ********\n           ******\n             ||  \n             ||\n           ------\n\n";
    std::ofstream oss(Get_target() + "_shrubbery");
    if (!oss)
        oss.close();
    oss << value ;
    oss.close();
    return (value);
}