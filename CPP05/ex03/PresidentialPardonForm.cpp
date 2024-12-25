/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 21:49:30 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/24 11:27:31 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("From_Shrubbery", 25, 5), target("Default"){ std::cout << "PresidentialPardonForm Cons" << std::endl;};
PresidentialPardonForm::PresidentialPardonForm(const std::string& value) : AForm("From_Shrubbery", 25, 5), target(value) {};
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& value) : AForm(value) ,  target(value.target) {};
PresidentialPardonForm::~PresidentialPardonForm () {std::cout << "Destructor Is Called !" << std::endl ;};
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& value){
    this->ifsigned = value.ifsigned ;
    this->target = value.target ;
    return (*this);
};

std::string PresidentialPardonForm::Get_target(){return (this->target);};

void PresidentialPardonForm::execute(Bureaucrat const& executor){
    std::cout << this->Sign_grade << " " << this->Excute_grade << " " << executor.getGrade() << std::endl ;
    (this->Sign_grade <= 25 && this->Excute_grade <= 5 && executor.getGrade() <= 5) ? 
    (functionDrawThree()) : (throw(CatchError()));
};

const char * PresidentialPardonForm::CatchError::what() const throw(){
    return ("Not a Valid Value !");
};

std::string PresidentialPardonForm::functionDrawThree() {
    return (this->Get_target() + "has been pardoned by Zaphod Beeblebrox !");
}