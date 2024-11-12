/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:08:50 by mmaghri           #+#    #+#             */
/*   Updated: 2024/10/12 14:22:18 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void GetDataBase(std::string Filename, StoreElements&  StoreIn){
    std::ifstream infile(Filename);
    (void) StoreIn ;
    std::string value ;
    for ( ; getline(infile, value); ) {

        if (value.substr(0, value.find(",")) != "date"){
            StoreIn.setMap(value.substr(0, value.find(",")),
            atof(value.substr(value.find(",") + 1).c_str()));
        }
    };
    infile.close();
    return ;
};

//Check If the String's Equal To each Other's 
int checkInput(std::string value, std::string Tocheck){
    if (value == Tocheck) return (1);
    return (-1);
};

// Check If the string Is Digit's
int checkIfDigit(std::string value){
    for (size_t i = 0; i < value.length(); i++){
        if (isdigit(value[i]) != 1) return (-1);
    };
    return (1);
};

// Function With the Exit Message 
void ExitMessage(std::string message){
    std::cout << message << std::endl ;
    exit(1);
};

// Check If there Is Spaces In the String !
int CheckIsspace(std::string value){
    for (size_t i = 0 ; i < value.length(); i++){
        if (isspace(value[i]) != 1) return (-1);
    };
    return (0);
};

// Return How many Times the Value Is in there ? 
int valueCountSerachElement(std::string value, std::string search){
    int flag = 0;
    for (size_t i = 0; i < search.length(); i++){
        if (search[i] == value[0]) flag += 1;
    };
    return (flag);
};

// Check Dates Based On the Month's 
int checkDaysBasedOnMonth(int numberPassed, int dayCheck){
    if (dayCheck > 31 || dayCheck < 1) return (-1);
    if (numberPassed == 4 || numberPassed == 6 
    || numberPassed == 9 || numberPassed == 11) {if (dayCheck > 30) return (-1);}
    if (numberPassed == 2) { if (dayCheck > 29) return (-1);}
    return (0);
};

// check If the Extract Dates Are Valid !
int extractDates(std::string value){
    std::string year ;
    std::string month ;
    std::string day;

    year = value.substr(0, value.find('-'));
    value = value.substr(value.find('-') + 1);
    month = value.substr(0, value.find('-'));
    value = value.substr(value.find('-') + 1);
    day = value ;
    if (year.length() < 4 || month.length() < 2 || day.length() < 2) return (-1);
    if (year.length() > 4 || month.length() > 2 || day.length() > 2) return (-1);
    if (atoi(month.c_str()) < 1 || atoi(month.c_str()) > 12) return (-1);
    if (checkDaysBasedOnMonth(atoi(month.c_str()), atoi(day.c_str())) == -1) return (-1);
    return (0);
};

// Check If there's Any space In the String 
int OtherCheckSpaceFunction (std::string value){
    for (size_t i = 0; i < value.length(); i++){
        if (isspace(value[i]) == 1 ){ return (-1);}
    }
    return (0);
};

// check if There's Any value With the character Passed To it .
int functionCheckOnlyPass(std::string value, std::string check){
    for (size_t index = 0; index < value.length(); index++){
        if (isdigit(value[index]) != 1 && value[index] != check[0]) return (-1);
    };
    return (0);
};

// check If the Half Of the string Are Valid Or Not !
int splitFirstHalf(std::string FirstHalf){
    int sec = FirstHalf.find_last_not_of(" \t\n");
    int firs = FirstHalf.find_first_not_of(" \t\n");
    FirstHalf = FirstHalf.substr(firs, sec + 1);
    if (functionCheckOnlyPass(FirstHalf, "-") == -1) return (-1);
    if (OtherCheckSpaceFunction(FirstHalf) == -1) return (-1);
    if ((valueCountSerachElement(" ", FirstHalf) > 0 || valueCountSerachElement("\t", FirstHalf) > 0
    || valueCountSerachElement("\n", FirstHalf) > 0) && FirstHalf.find("Error") == std::string::npos) // Cheking if Like There's Sapce Or tab or Newline
        FirstHalf = ("Error Bad Input => " + FirstHalf); // If so It's a Bad Input then 
    else {
        if (extractDates(FirstHalf) == -1) return (-1);
    }
    return (0);
};

// Function to check the Sec Half of the Argument if it is Good Or Not !
int splitSecHalf(std::string SecHalf) { 
    int sec = SecHalf.find_first_not_of(" \t\n");
    int first = SecHalf.find_last_not_of(" \t\n") ;
    double NumberCheck ;
    std::string valueChecked ;

    valueChecked = SecHalf.substr(sec, first) ;
    NumberCheck = atof(valueChecked.c_str());
    if (NumberCheck > 1000) return (-1);
    if (valueCountSerachElement(".", valueChecked) > 1) return (-1); // Search If like there's More Then a . in the Second Half
    if (functionCheckOnlyPass(valueChecked, ".") == -1) return (-1);
    return (0);
};


std::string ParsDays(std::string value){
    std::string firsthalf = value.substr(0, value.find("|"));
    std::string secHalf = value.substr(value.find("|") + 1);
    try {
        if ((value.find("Error") == std::string::npos) && CheckIsspace(secHalf) == 0 ){value = "Error Bad Input " + value ;}
        if ((value.find("Error") == std::string::npos) && (isspace(value[value.find("|") - 1]) != 1 || // if theere's Not space Or tab | After Or before This
        isspace(value[value.find("|") + 1]) != 1 )){
            value = "Error Bad Input => " + value ; 
        }
        if (value.find("Error") == std::string::npos && ((isspace(value[value.find("|") - 2])) == 1 || (isspace(value[value.find("|") + 2])))) {
            value = "Error Bad Input => " + value; // Or there Is Not Space 
        }
        if (splitFirstHalf(firsthalf) == -1 && value.find("Error") > 0) {
            value = "Error Bad Input " + value ;
        }
        if (splitSecHalf(secHalf) == -1 && value.find("Error") > 0){
            value = "Error Bad Input " + value ;
        }
    }
    catch (std::out_of_range &e){
        
    }
    return (value);
};

std::string FunctionGetElmenetDates (std::string values, std::string seperator){
    if (values.find("Error") == std::string::npos){
        values = values.substr(values.find_first_not_of(" \t\n"), values.find(seperator[0]));
        int firstPart = values.find_first_not_of(" \t\n");
        int secPart = values.find_last_not_of(" \t\n");
        (void)secPart ;
        (void)firstPart ;
        return (values.substr(firstPart, secPart + 1));
    }
    return ("Error ");
};

int checkSpaceAtfirst(std::string valueCheck){
    if (isspace(valueCheck[0]) == 1) {return (-1);}
    return (0);
};


void CheckInputData(std::string Filename, StoreElements& StoreIn){
    std::ifstream infile(Filename);
    int flag = 0;
    (void)flag;
    std::string Format ;
    int index = 0;
    if (!infile){
        std::cout << "could not open file." << std::endl ;
        exit(1);
    }

    (void)StoreIn ;
    for (; getline(infile, Format);){
        if (flag > 0) {
            try {
                if (Format.find("date | value") == 1)
                    flag += 1;
                if (checkSpaceAtfirst(Format) == -1 && Format.length() >= 1) { // Check If the start of the elements That Hav a Space Or a tab
                    std::cout << "Error Bad Input => " + Format << std::endl ; // If So Store It with the Erro Msg
                }
                else if (CheckIsspace(Format) != 0 && (valueCountSerachElement("|", Format) > 1 || valueCountSerachElement("-", Format) > 2 
                || valueCountSerachElement("-", Format) < 2)) std::cout << "Error Bad Input => " + Format << std::endl ; // Check If the element Has Enougt | and -
                else if (CheckIsspace(Format) != 0 && ((Format.find("|") == std::string::npos))){ // if Not Store It In the Deque With the Same Error mssg 
                    std::cout << "Error Bad Input => " + Format << std::endl ;
                }
                else if (CheckIsspace(Format) != 0 && (Format.find("|") != std::string::npos)){ // if it is Valid Then Store It it the Deque 
                        Format = ParsDays(Format);
                        functionCheckWithExactDates(Format, StoreIn);
                }
            } catch (std::out_of_range &e) { // if an OutOfRange Expetion Is thrown We will catch It then
                std::cout << "Error Bad Input => " << Format << std::endl ;
            }
        }
        if (Format.length() > 1 && CheckIsspace(Format) != 0 && checkIfDigit(Format) == -1 
        && checkInput("date | value", Format) == -1 && flag == 0) { ExitMessage("Not A valid Format !"); } // if It is Not A valid line The It will Thorw The Message
        else if (checkInput("date | value", Format) == 1) {flag = 1;} // set The flag So It can Enter the Loop In the Next Iteration
        index++ ;
    };
};
