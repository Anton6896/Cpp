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

    // for ech person create both
    Account account;
    SaveAccount save_account;
protected:
    double salary;
public:
    Person(std::string name_ = "empty", int age_ = 0, double salary_ = 0.0, double add = 0.0);

    void show_self();

};


#endif //BASIC_PERSON_H
