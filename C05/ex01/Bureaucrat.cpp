/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:30:26 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/23 12:24:01 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Default Name Br"){
    grade = 1;
    std::cout << "Bureaucrat Constructor Called !" << std::endl ;
};

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name){
    (grade < 1) ? throw GradeTooHighException() : 
    (grade > 150) ? throw GradeTooLowException() : this->grade = grade;
};

std::ostream& operator<< (std::ostream &os, const Bureaucrat& target) {
    std::cout << target.getName() << ", bureaucrat grade" << target.getGrade(); 
    return (os);
};

Bureaucrat::Bureaucrat(const Bureaucrat& target){
    *this = target ;
};

Bureaucrat& Bureaucrat::operator= (const Bureaucrat& target){
    if (this != &target){
        (std::string)name = target.name;
        grade = target.grade;
    };
    return (*this);
};

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
     return "Grade too low";
}

int Bureaucrat::getGrade() const {
    return (grade);
};

std::string Bureaucrat::getName() const{
    return (name);
};

Bureaucrat::~Bureaucrat(){
    std::cout << "Destructor Called !" << std::endl ;
};

void Bureaucrat::Increment() {
    if (this->grade > 1){
        this->grade -= 1;
    };
};

void Bureaucrat::Decrement() {
    if (this->grade < 150){
        this->grade += 1;
    };
};

void Bureaucrat::signForm(const Form& value) {
    (value.checkSign() == false) ? (std::cout << this->getName() << " couldn’t sign " << value.nameGeter() << "Because" << "It's Not Valid") :
    (std::cout << this->getName() << " Signed " << value.nameGeter() << std::endl);
};