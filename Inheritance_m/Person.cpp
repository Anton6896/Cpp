//
// Created by User on 12/01/2020.
//

#include "Person.h"
#include <iostream>

using namespace std;

Person::Person(std::string name_, int age_, double salary_, double add)
        : name{move(name_)}, age(age_), salary{salary_} {
    cout << "person " << name << " created" << endl;

}




