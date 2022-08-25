#include<iostream>
#ifndef UNTITLED2_EMPLOYEE_H
#define UNTITLED2_EMPLOYEE_H
#include "Enums.h"

class Employee {
public:
    Employee(){
        std::cout<< "Employee Default Constructor Invoked"<< std::endl;

    }
    Employee(std::string name, std::string surname, std::string idNumber,int age,
             Country country, Gender gender,Employee* headEmployee){
        this->name=name;
        this->surname=surname;
        this->idNumber=idNumber;
        this->age=age;
        this->country=country;
        this->gender=gender;
        this->headEmployee=headEmployee;
    }
    ~Employee(){
        std::cout<< "Employee Default Destructor Invoked"<< std::endl;
    }
    std::string name;
    std::string surname;
    std::string idNumber;
    int age;
    Employee* headEmployee;
    Gender gender;
    Country country;
protected:
private:

};


#endif //UNTITLED2_EMPLOYEE_H
