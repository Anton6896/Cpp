//
// Created by User on 12/01/2020.
//

#ifndef BASIC_PERSON_H
#define BASIC_PERSON_H

#include <string>
#include "Account.h"
#include "SaveAccount.h"

class Person {
private:
    std::string name;
    int age;

    // the SaveAccount will create the main account for the person too
    // so ech person will have an saving and primary
    SaveAccount account;
protected:
    double salary;
public:
    Person(std::string name_ = "empty", int age_ = 0, double salary_ = 0.0);

    void deposite(double n);

    void save_daposite(double n);

    void show();

};


#endif //BASIC_PERSON_H
