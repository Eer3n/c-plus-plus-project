//
// Created by Elif Eren on 2022/08/25.
//

#ifndef UNTITLED2_DEVELOPER_H
#define UNTITLED2_DEVELOPER_H
#include "Employee.h"
#include "Enums.h"
#include <iostream>
#include <list>

enum DevType{
    Database,
    Middleware,
    FrontEntDeveloper,
    BackEntDeveloper,
};

class Developer : public Employee{
public:
    Developer(){
        std::cout<< "Developer Default Destructor Invoked"<< std::endl;
    }
    ~Developer() {
        std::cout << "Developer Default Destructor Invoked" << std::endl;
    }
    Developer(std::string name, std::string surname, std::string idNumber,int age,Country country,
              Gender gender,Employee* headEmployee,
               DevType devType,TitleLevel titleLevel,int yearOfProfession, float grossSalary)
              :Employee(name, surname, idNumber, age,country, gender, headEmployee){
        this->devType=devType;
        this->titleLevel=titleLevel;
        this->yearOfProfession=yearOfProfession;
        this->grossSalary=grossSalary;
    }
    DevType devType;
    TitleLevel titleLevel;
    int yearOfProfession;
    float grossSalary;
    void setTechnologyStack(std::list<std::string>* stack){
        this->technologyStack = *stack;
    }
    std::list<std::string>getTechnologyStack(){
        return this->technologyStack;
    }
protected:
private:
    std::list<std::string>technologyStack;



};



#endif //UNTITLED2_DEVELOPER_H
