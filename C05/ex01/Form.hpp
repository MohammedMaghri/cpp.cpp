/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 16:48:06 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/23 12:18:48 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat ;
class Form {
    private :
        const std::string name;
        bool ifsigned ; 
        const int Sign_grade;
        const int Excute_grade;
    public  :
        void setName();
        Form();
        Form(const Form& value);
        Form& operator= (const Form& value) ;
        Form(const std::string name, const int Sign, const int excute);
        ~Form();
        int SignGeter()  const;
        std::string nameGeter()  const;
        bool checkSign() const;
        int Excutegrade() const;
        void BeSigned(const Bureaucrat& value);
        class GradeTooHighException : public std::exception {
            public :
                const char *what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public :
                const char *what() const throw();
        };
        virtual void execute() = 0;
};

std::ostream& operator<<(std::ostream& os, const Form& value) ;