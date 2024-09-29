/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 17:03:40 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/28 21:25:46 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base(){
    std::cout << "Destructor" << std::endl ;
};

Base * generate(void){
    static int value;
    value++ ;
    std::cout << value % 3 << std::endl ;
    if ((value % 3) == 0) return (new A);
    if ((value % 3)==  1) return (new B);
    if ((value % 3) == 2) return (new C);
    return (NULL);
};

void identify(Base *p){
    A *value = dynamic_cast<A*>(p);
    if (value == NULL) {
        B *sec = dynamic_cast<B*>(p);
        if (sec == NULL) {
            C *third = dynamic_cast<C*>(p);
            if (third == NULL) {
                std::cout << "No Valid One !" ;
            } else std::cout << "Type C Value !" << std::endl ;
        } else std::cout << "Type B Value !" << std::endl ;
    } else std::cout << "Type A Value !" << std::endl ;
};

void identify(Base& p){
    try {
        A& value = dynamic_cast<A&>(p);
        (void)value ;
        std::cout << "Type A !" << std::endl ;
    } catch (std::bad_cast &e) {
        try {
            B& tes = dynamic_cast<B&>(p);
            (void)tes ;
            std::cout << "Type B" << std::endl ;
        } catch (std::bad_cast &e){
            try {
                C& je = dynamic_cast<C&>(p);
                (void)je ;
                std::cout << "Type C" << std::endl ;
            } catch (std::bad_cast &e){
                std::cout << "Not Type Available !" << std::endl ; 
            }
        }
    }
};