/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 21:20:53 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/24 11:29:56 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"
#include <iostream>
#include <string>

RobotomyRequestForm::RobotomyRequestForm() : AForm("From_Shrubbery", 72, 45), target("Default"){ std::cout << "RobotomyRequestForm Cons" << std::endl;};
RobotomyRequestForm::RobotomyRequestForm(const std::string& value) : AForm("From_Shrubbery", 72, 45), target(value) {};
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& value) : AForm(value) ,  target(value.target) {};
RobotomyRequestForm::~RobotomyRequestForm () {std::cout << "Destructor Is Called !" << std::endl ;};
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& value){
    this->setifsigned(value.checkSign());
    this->target = value.target ;
    return (*this);
};

std::string RobotomyRequestForm::Get_target(){return (this->target);};

void RobotomyRequestForm::execute(Bureaucrat const& executor){
    (this->SignGeter() <= 72 && this->Excutegrade() <= 45 && executor.getGrade() <= 72) ? 
    (functionDraw()) : (throw(CatchError()));
};

std::string RobotomyRequestForm::functionDraw() {
    static int value = 0;
     if (value % 2 == 0){
        std::cout << "the robotomy failed." << std::endl ;
        value += 1;
        return ("the robotomy failed.");
    }
    else {
        std::cout << this->target + "has been robotomized successfully 50% of the time" << std::endl ;
        value += 1;
        return (this->target + "has been robotomized successfully 50% of the time");
    }
    return (NULL);
}

const char * RobotomyRequestForm::CatchError::what() const throw(){
    return ("Robotomy Failed !");
};