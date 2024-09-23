 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 10:36:29 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/22 15:03:35 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include <ostream>

AForm::AForm() : name("Default name"), ifsigned(false), Sign_grade(1), Excute_grade(1){
    std::cout <<  "Constructor Is Called !" << std::endl ;
};

AForm::AForm(const AForm& value) : name(value.name), ifsigned(value.ifsigned), Sign_grade(value.Sign_grade), Excute_grade(value.Excute_grade){
    std::cout << "Paramitrized Constructor Is called !" << std::endl ;
    (this->SignGeter() > 150 || this->Excutegrade() > 150) ? throw(GradeTooHighException()) : (this->SignGeter() < 1 || this->Excutegrade() < 1) ? throw(GradeTooLowException()) :
    (0);

};

AForm& AForm::operator= (const AForm& value) {
    ifsigned = value.ifsigned ;
    return (*this);
};

AForm::AForm(const std::string name, const int Sign, const int excute) : name(name), Sign_grade(Sign), Excute_grade(excute){
    (this->SignGeter() > 150 || this->Excutegrade() > 150) ? throw(GradeTooHighException()) : (this->SignGeter() < 1 || this->Excutegrade() < 1) ? throw(GradeTooLowException()) :
    (0);  
};

AForm::~AForm() {
    std::cout << "Destructor Called !" << std::endl ;
};

const char *AForm::GradeTooHighException::what() const throw()  {
    return ("Grade Too Height !");
};

const char *AForm::GradeTooLowException::what() const throw() {
    std::cout << "Herer" <<  std::endl ;
    return ("Grade Too Low !");  
};

int AForm::SignGeter() const {
    return (this->Sign_grade);
};

std::string AForm::nameGeter() const {
    return (this->name);
};

bool    AForm::checkSign() const {
    return (this->ifsigned);
};

int AForm::Excutegrade() const {
    return (this->Excute_grade);
};

std::ostream& operator<< (std::ostream& os, const AForm& value) {
    os << "name" <<  value.nameGeter() << std::endl ;
    os << "ifsigned" << value.checkSign() << std::endl ;
    os << "Sign_Grade" << value.SignGeter() << std::endl ;
    os << "Excute_grade" << value.Excutegrade() << std::endl ;
    return (os);
};

void AForm::BeSigned(const Bureaucrat& target){
    std::cout << "Sec " << this->Sign_grade << std::endl ;
    std::cout << "Value " << target.getGrade() << std::endl ;
    (this->Sign_grade < target.getGrade()) ? throw(GradeTooLowException())
    : (this->ifsigned = false) ;
}
