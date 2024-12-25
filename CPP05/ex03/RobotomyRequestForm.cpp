/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 21:20:53 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/24 11:37:05 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"
#include <iostream>
#include <string>

RobotomyRequestForm::RobotomyRequestForm() : AForm("From_Shrubbery", 72, 45), target("Default"){ std::cout << "RobotomyRequestForm Cons" << std::endl;};
RobotomyRequestForm::RobotomyRequestForm(const std::string& value) : AForm("From_Shrubbery",  72, 45), target(value) {};
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& value) : AForm(value) ,  target(value.target) {};
RobotomyRequestForm::~RobotomyRequestForm () {std::cout << "Destructor Is Called !" << std::endl ;};
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& value){
    this->ifsigned = value.ifsigned ;
    this->target = value.target ;
    return (*this);
};

std::string RobotomyRequestForm::Get_target(){return (this->target);};

void RobotomyRequestForm::execute(Bureaucrat const& executor){
    (this->SignGeter() <= 72 && this->Excutegrade() <= 45 && executor.getGrade() <= 72) ? 
    ((std::cout << functionDraw() << std::endl))  : (throw(CatchError()));
};

std::string RobotomyRequestForm::functionDraw() {
     static int value = 0;
     if (value % 2 == 0){
        value += 1;
        return ("the robotomy failed.");
    }
    else {
        value += 1;
        return (this->target + "has been robotomized successfully 50% of the time");
    }
}

const char * RobotomyRequestForm::CatchError::what() const throw(){
    return ("Robotomy Failed !");
};