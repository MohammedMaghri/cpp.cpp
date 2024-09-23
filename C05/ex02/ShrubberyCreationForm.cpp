/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 15:08:00 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/23 19:16:27 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("From_Shrubbery", 25, 15), target("Default"){ std::cout << "ShrubberyCreationForm Cons" << std::endl;};
ShrubberyCreationForm::ShrubberyCreationForm(const std::string& value) : AForm("From_Shrubbery", 25, 15), target(value) {};
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& value) : AForm(value) ,  target(value.target) {};
ShrubberyCreationForm::~ShrubberyCreationForm () {std::cout << "Destructor Is Called !" << std::endl ;};
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& value){
     setifsigned(value.checkSign());
    this->target = value.target ;
    return (*this);
};
std::string ShrubberyCreationForm::Get_target(){return (this->target);};

void ShrubberyCreationForm::execute(Bureaucrat const& executor){
    (this->SignGeter() < 145 && this->Excutegrade() < 137 && executor.getGrade() <= 145) ? 
    (functionDrawThree()) : (throw(CatchError()));
};

const char * ShrubberyCreationForm::CatchError::what() const throw(){
    return ("Not a Valid Value !");
};
std::string ShrubberyCreationForm::functionDrawThree() {
    std::string value = "\n            <**>\n           <-**->\n          <******>\n          ********\n          ********\n           ******\n             ||  \n             ||\n           ------\n\n";
    std::ofstream oss(Get_target() + "_shrubbery");
    if (!oss)
        oss.close();
    oss << value ;
    oss.close();
    return (value);
}