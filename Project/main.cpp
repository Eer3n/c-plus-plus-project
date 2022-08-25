#include <iostream>
#include <list>
#include "Employee.h"
#include "Enums.h"
#include "Developer.h"
int main() {

    Employee elif("ELif","Eren","123456",21, SouthKorea, Female,
                  nullptr);

    Employee ege("Ege","Demirbas","123456",26, Turkey, Male,
                 &elif);
    Developer devElif("Elif","Eren","123456",21,SouthKorea,Female,
                      nullptr,BackEntDeveloper,
                      Junior,1,150.000f);
    Developer devEge("Ege","Demirbas","123456",26, Turkey, Male,
                     &elif,BackEntDeveloper,Junior,1,150.000f);


    std::list<std::string>elifTechStack;
    elifTechStack.push_back("Java");
    elifTechStack.push_back("Python");
    elifTechStack.push_back("C++");
    elifTechStack.push_back("Spring Boot");
    elifTechStack.push_back("ASP .Net 5 and 6");
    devElif.setTechnologyStack(&elifTechStack);

    for (auto stack : devElif.getTechnologyStack()) {
        std::cout<< stack<< std::endl;
    }

    std::list<Employee> employeeList;
    employeeList.push_back(elif);
    employeeList.push_back(ege);

    for (Employee emp : employeeList) {
        std::cout<< emp.name<< std::endl;

    }
    std::list<Developer> developerList;
    developerList.push_back(devElif);
    developerList.push_back(devEge);
    int itr = 0;
    for (Developer dev : developerList) {
        Employee* empDevPtr = &dev;
        std::cout<<empDevPtr->name<<std::endl;
        itr++;
    }
    //upcasting
    Employee* devElifPtr = &devElif;

    std::cout<< devElifPtr->name<<std::endl;

}




