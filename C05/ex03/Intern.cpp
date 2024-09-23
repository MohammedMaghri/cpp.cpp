/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:48:37 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/23 17:39:03 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern(){
    std::cout << "Constructor Called !" << std::endl ;
};

Intern::Intern(const Intern& value){
    (void)value ;
};

Intern& Intern::operator= (const Intern& value) {
    (void)value;
    return (*this);
};

Intern::~Intern(){
    std::cout << "Destructor Is called !" << std::endl ;
};

AForm *Intern::pres(std::string target_name){
     return (new PresidentialPardonForm(target_name));
};
AForm *Intern::rob(std::string target_name){
     return (new RobotomyRequestForm(target_name));
};
AForm * Intern::shru(std::string target_name){
     return (new ShrubberyCreationForm(target_name));
};

AForm* Intern::makeForm(std::string FormName, std::string target_name) {
    int flag = -1;
    std::string values[] = {"PresidentialPardonForm", "RobotomyRequestForm" , "ShrubberyCreationForm", "NaN"};
    AForm* (Intern::*ptromemeber[])(std::string name) = {
        &Intern::pres , &Intern::rob , &Intern::shru
    };
    for (int i = 0 ; i < 4; i++){
        (values[i].compare(FormName) == 0) ? (flag = i) : (0);
    }
    return (flag != -1) ? (this->*ptromemeber[flag])(target_name) : NULL ;
};