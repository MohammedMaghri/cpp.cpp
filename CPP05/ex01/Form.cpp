/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 10:36:29 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/24 11:56:04 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <ostream>

Form::Form() : name("Default name"), ifsigned(false), Sign_grade(1), Excute_grade(1){
    std::cout <<  "Constructor Is Called !" << std::endl ;
};

Form::Form(const Form& value) : name(value.name), ifsigned(value.ifsigned), Sign_grade(value.Sign_grade), Excute_grade(value.Excute_grade){
    std::cout << "Paramitrized Constructor Is called !" << std::endl ;
    (this->SignGeter() > 150 || this->Excutegrade() > 150) ? throw(GradeTooHighException()) : (this->SignGeter() < 1 || this->Excutegrade() < 1) ? throw(GradeTooLowException()) :
    (0);

};

Form& Form::operator= (const Form& value) {
    ifsigned = value.ifsigned ;
    return (*this);
};

Form::Form(const std::string name, const int Sign, const int excute) : name(name), Sign_grade(Sign), Excute_grade(excute){
    (this->SignGeter() > 150 || this->Excutegrade() > 150) ? throw(GradeTooHighException()) : (this->SignGeter() < 1 || this->Excutegrade() < 1) ? throw(GradeTooLowException()) :
    (0);  
};

Form::~Form() {
    std::cout << "Destructor Called !" << std::endl ;
};

const char *Form::GradeTooHighException::what() const throw()  {
    return ("Grade Too Height !");
};

const char *Form::GradeTooLowException::what() const throw() {
    return ("Grade Too Low !");  
};

int Form::SignGeter() const {
    return (this->Sign_grade);
};

std::string Form::nameGeter() const {
    return (this->name);
};

bool    Form::checkSign() const {
    return (this->ifsigned);
};

int Form::Excutegrade() const {
    return (this->Excute_grade);
};

std::ostream& operator<< (std::ostream& os, const Form& value) {
    os << "name " <<  value.nameGeter() << std::endl ;
    os << "ifsigned " << value.checkSign() << std::endl ;
    os << "Sign_Grade "  << value.SignGeter() << std::endl ;
    os << "Excute_grade " << value.Excutegrade() << std::endl ;
    return (os);
};

void Form::BeSigned(const Bureaucrat& target){
    (this->Sign_grade < target.getGrade()) ? throw(GradeTooLowException())
    : (this->ifsigned = true) ;
}

