 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:34:09 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/19 17:10:15 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include  <string>
#include "AForm.hpp"
#include <fstream>

class AForm ; 
class Bureaucrat {
    private :
       const std::string name;
       int grade;
    public :
        Bureaucrat();
        void Increment();
        void Decrement();
        Bureaucrat(const std::string name, int grade);
        Bureaucrat(const Bureaucrat& target);
        Bureaucrat& operator= (const Bureaucrat& target);
        int getGrade() const;
        int signForm(const AForm& value);
        std::string getName() const;
        void executeForm (AForm const &form);
        class GradeTooHighException : public std::exception 
        {
            public:
                 const char* what() const throw();
        };

        class GradeTooLowException : public std::exception 
        {
            public:
                const char* what() const throw();
        };
        
        ~Bureaucrat();
};

std::ostream& operator << (std::ostream &os, const Bureaucrat& target);